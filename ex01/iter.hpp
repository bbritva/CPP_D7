#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>

template <typename T, typename F> void iter(T arr, int len, F func)
{
	int i = -1;
	while (++i < len)
		func(arr[i]);
}

template <typename T> void showMe(T const &me)
{
	std::cout << me << "\n";
}

#endif//MAIN_HPP
