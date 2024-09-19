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

// Overload insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}
