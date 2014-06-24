#include <iostream>

int main(int argc, char const *argv[])
{
	/* code */
	int size;
	int a[size];
	std::cout << "Please input size:";
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		std::cout << "input a[" << i << "]:";
		std::cin >> a[i];
	}

	std::cout << "a[" << size <<"] = {";
	for (int i = 0; i < size; ++i)
	{
		std::cout << a[i];
		if (i < size - 1)
		{
			std::cout  << ", ";
		}
	}	
	std::cout << "}" << std::endl;

	return 0;
}