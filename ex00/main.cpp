#include "whatever.hpp"

int main()
{
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
