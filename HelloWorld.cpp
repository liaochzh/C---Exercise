//
//  main.cpp
//  Hello_world
//
//  Created by Charlie Liao on 14-5-13.
//  Copyright (c) 2014年 Charlie Liao. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...
    
    std::string first;
    std::string last;
    std::cout << "Please input first name:\n";
    std::cin >> first;
    std::cout << "Please input last name:\n";
    std::cin >> last;
    std::cout << "Hello," << first << " "<< last << "!" << std::endl;
    
    float r;//创建一个浮点型变量存放半径
    float l;//船桨一个浮点型变量存放运算得出的周长结果
    const float pi = 3.1415926f;
    
    std::cout <<"请输入半径：";
    std::cin >> r;
    l = 2 * pi * r;
    std::cout << "这个圆的周长为：" << l << std::endl;
    
    int a, b;
    a = b = 1;
    std::cout << "a->" << a << " b->" << b << std::endl;
    
    std::cout << "7/-2=" << 7/-2 << "\n-7%2=" << -7%2 << std::endl;
    
    return 0;
}

