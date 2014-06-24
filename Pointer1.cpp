#include <iostream>

void arrayCopy(int *src , int *dest, int size);
void display(const int *array, int size);
int* max(int *array, int size);

int main(int argc, char const *argv[])
{
	/* code */
	int a[] = {3, 4, 5, 6, 2, 3, 1};
	int b[7];
	arrayCopy(a, b, sizeof(a)/sizeof(int));
    std::cout << "The data of array a is:";
	display(a, sizeof(a)/sizeof(int));
    std::cout << "The data of array b is:";
    display(b, 7);

    std::cout << "Array b max number is:" << *max(b, sizeof(b) / sizeof(int)) <<std::endl;

	return 0;
}

void arrayCopy(int *src , int *dest, int size)
{
    for (int i = 0; i < size; ++i)
    {
 	    dest[i] = src[i];
    }
}

void display(const int *array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
	}
    std::cout << std::endl;
}

int* max(int *array, int size)
{
  int *max = array;
  for (int i = 0; i < size; ++i)
  {
  	if (array[i] > *max)
  	{
  		max = &array[i];
  	}
  }
  return max;
}


