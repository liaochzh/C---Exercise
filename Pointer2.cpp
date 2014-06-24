#include <iostream>

int main(int argc, char const *argv[])
{
	
	int size;
	float sum = 0;
	int *heapArray;
	std::cout << "请输入元素个数:";
	std::cin >> size;
	heapArray = new int[size];
	std::cout << "请输入个元素：" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> heapArray[i];
		sum = sum + heapArray[i];
	}

    std::cout << "这些数的平均值为" << sum/size << std::endl;
    /**
     * 如果申请的是一个堆内存变量，则delete后的[]可以省略；
     * 如果申请的是一个堆内存数组，则该[]不能省略，否则还是会出现内存泄露。
     * 另外，我们也不难发现，delete后的指针就是通过new获得的指针，
     * 如果该指针的数据被修改或丢失，也可能造成内存泄露。
     */
    delete[] heapArray;

	return 0;
}