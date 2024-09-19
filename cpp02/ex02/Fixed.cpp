#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Integer constructor
Fixed::Fixed(int value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}

// Float constructor
Fixed::Fixed(float value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fractionalBits));
}

// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Use assignment operator
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _value = other.getRawBits();
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Get raw value
int Fixed::getRawBits(void) const {
    return _value;
}

// Set raw value
void Fixed::setRawBits(int const raw) {
    _value = raw;
}

// Convert to float
float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

// Convert to int
int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

// Overload comparison operators
bool Fixed::operator>(const Fixed& other) const {
    return _value > other._value;
}

bool Fixed::operator<(const Fixed& other) const {
    return _value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const {
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return _value != other._value;
}

// Overload arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result._value = _value + other._value;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result._value = _value - other._value;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result._value = (static_cast<long>(_value) * other._value) >> _fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other._value == 0) {
        std::cerr << "Division by zero!" << std::endl;
        exit(EXIT_FAILURE); // or handle error as needed
    }
    Fixed result;
    result._value = (static_cast<long>(_value) << _fractionalBits) / other._value;
    return result;
}

// Overload increment/decrement operators
Fixed& Fixed::operator++() { // Pre-increment
    _value += 1;
    return *this;
}

Fixed Fixed::operator++(int) { // Post-increment
    Fixed temp(*this);
    _value += 1;
    return temp;
}

Fixed& Fixed::operator--() { // Pre-decrement
    _value -= 1;
    return *this;
}

Fixed Fixed::operator--(int) { // Post-decrement
    Fixed temp(*this);
    _value -= 1;
    return temp;
}

// Static member functions
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

// Overload insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}

