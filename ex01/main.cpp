#include "iter.hpp"

int main()
{
	int arr[] = {1, 2, 3, 4, 5};

	::iter(arr, 5, ::showMe<int>);

	std::string strs[] = {"str1", "str2", "str3", "str4", "str5"};

	::iter(strs, 5, ::showMe<std::string>);
	return (0);
}
