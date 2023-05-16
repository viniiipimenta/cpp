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

	private:
		int value;
		static const int bit;
};

std::ostream &operator<< (std::ostream &o, Fixed const &i);
#endif