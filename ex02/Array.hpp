#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T				*_arr;
	unsigned int	_len;
public:
	Array()
	{
		_arr = new T[0];
		_len = 0;
	};
	Array(unsigned int len)
	{
		_arr = new T[len];
		_len = len;
	};
	Array(Array const &other)
	{
		_arr = other._arr;
		_len = other._len;
	}
	Array &operator=(const Array &other)
	{
		if (this == &other)
			return (*this);
		_arr = other._arr;
		_len = other._len;
		return (*this);
	}
	T &operator[](unsigned int index)
	{
		if (index < _len)
			return _arr[index];
		throw std::exception();
	}
	unsigned int size()
	{
		return (_len);
	}

};

#endif//ARRAY_HPP
