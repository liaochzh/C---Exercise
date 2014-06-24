#include <iostream>

void pointerFunction();

int main(int argc, char const *argv[])
{
	int i = 3;
	int *iptr = &i;
    int **iptrptr = &iptr; //iptr 也是变量，也能够获取它的地址
    std::cout << "Address of Var i=" << iptr << std::endl; // 输出iptr存储的内容，即i在内存中的地址
    std::cout << "Data of Var i=" << *iptr << std::endl; //输出iptr所指向的变量
    std::cout << "Address of Pointer iptr=" << iptrptr << std::endl; //输出iptr在内存中的地址
    std::cout << "Address of Var i=" << *iptrptr << std::endl; //输出iptrptr所指向的变量，即iptr
    std::cout << "Data of Var i=" << **iptrptr << std::endl; //输出iptrptr所指向的指针所指向的变量，即i

    int &iAdd = i;
    std::cout << "iAdd=" << iAdd << std::endl;
    iAdd = 2;
    std::cout << "Data of Var i=" << i << std::endl;

    pointerFunction();

	return 0;
}

void pointerFunction()
{
    int a = 42;
    const int b = 84;
    const int *captr = &a; // 常量指针
    int* const acptr = &a; // 指针常量
    int *bptr = &b; //错误，不能把常量的地址给指针变量
    const int *cbptr = &b; //把常量的地址给常量指针是允许的
    *captr = 68; //错误，间接引用常量指针不可以修改内存中的数据
    *acptr = 68; //间接引用指针常量可以修改内存中的数据
    captr = &b; //常量指针可以指向其他变量
    acptr = &b; //错误，指针常量不能指向其他变量
    const int* const cacptr = &a; //常量指针常量，既不能间接引用修改数据，也不能指向别的变量或者常量
    *cacptr = 68; //错误，不能间接引用修改数据
    cacptr = &b; //错误，不能指向别的常量或变量
}
