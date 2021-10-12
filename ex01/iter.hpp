#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>

template <typename T>
void iter(T *arr, int len, void (*func)(T const&))
{
	int i = -1;
	while (arr && (++i < len))
		func(arr[i]);
}

template <typename T> void showMe(T const &me)
{
	std::cout << me << "\n";
}

#endif//MAIN_HPP
