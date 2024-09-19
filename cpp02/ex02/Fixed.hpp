#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value; //valor del número de punto fijo
		static const int _fractionalBits = 8; //numero de bits fraccionarios (constante)

	public:
		Fixed();  //constructor por defecto
		Fixed(const Fixed &other); //constructor de copia
		Fixed &operator=(const Fixed &other); //operador de asignación
		~Fixed(); //destructor

		Fixed(int value);
		Fixed(float value);

		int getRawBits(void) const; //obtener el valor bruto
		void setRawBits(int const raw); //establecer el valor bruto

		float toFloat(void) const;
		int toInt(void) const;

		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed& operator++();    // Pre-increment
		Fixed operator++(int); // Post-increment
		Fixed& operator--();    // Pre-decrement
		Fixed operator--(int); // Post-decrement

		// Static member functions
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		friend std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
};

#endif