#include "whatever.hpp"

class Awesome
		{
		public:
			Awesome(void) : _n(0) {}
			Awesome( int n ) : _n( n ) {}
			Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
			bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
			bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
			bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
			bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
			bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
			bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
			int get_n() const { return _n; }
		private:
			int _n;
		};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	{
		Awesome a(2), b(4);

		swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}
	{
		int a(5), b(15);
		std::cout << "MAX (" << a << ", " << b << ") = " << ::max(a, b) << "\n";
		std::cout << "MIN (" << a << ", " << b << ") = " << ::min(a, b) << "\n";
		std::cout << "Before swap:\na = " << a << "\nb = " << b << "\n";
		::swap(a, b);
		std::cout << "After swap:\na = " << a << "\nb = " << b << "\n";
	}
	{
		std::string a("str1");
		std::string b("str2");
		std::cout << "MAX (" << a << ", " << b << ") = " << ::max(a, b) << "\n";
		std::cout << "MIN (" << a << ", " << b << ") = " << ::min(a, b) << "\n";
		std::cout << "Before swap:\na = " << a << "\nb = " << b << "\n";
		::swap(a, b);
		std::cout << "After swap:\na = " << a << "\nb = " << b << "\n";
	}
	return (0);
}
