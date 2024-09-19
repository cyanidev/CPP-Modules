#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int _value; //valor del número de punto fijo
		static const int _fractionalBits = 8; //numero de bits fraccionarios (constante)

	public:
		Fixed();  //constructor por defecto
		Fixed(const Fixed &other); //constructor de copia
		Fixed &operator=(const Fixed &other); //operador de asignación
		~Fixed(); //destructor

		int getRawBits(void) const; //obtener el valor bruto
		void setRawBits(int const raw); //establecer el valor bruto
};

#endif