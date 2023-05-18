#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:
		Fixed();
		Fixed(int value);
		Fixed(float value);
		Fixed(Fixed const &src);
		~Fixed();
		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool operator<(const Fixed &fixed) const;
		bool operator>(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;

		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed &max(Fixed &fixed, Fixed &fixed2);
		static const Fixed &max(const Fixed &fixed, const Fixed &fixed2);
		static Fixed &min(Fixed &fixed, Fixed &fixed2);
		static const Fixed &min(const Fixed &fixed, const Fixed &fixed2);

	private:
		int value;
		static const int bit;
};

std::ostream &operator<< (std::ostream &o, Fixed const &i);
#endif