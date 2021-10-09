#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>

template <typename T> void swap(T& a, T& b)
{
	T c(a);
	a = b;
	b = c;
}

template <typename T> const T& max(T const &a, T const &b)
{
	return (a > b) ? a : b;
}

template <typename T> const T& min(T const &a, T const &b)
{
	return (a < b) ? a : b;
}
#endif//MAIN_HPP
