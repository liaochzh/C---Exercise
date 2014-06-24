//
//  main.cpp
//  Variables
//
//  Created by RONGLIAN on 14-5-13.
//  Copyright (c) 2014年 Charlie Liao. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

void makenum();
void cal();
void output();
bool verifyPassword(int pw);

int main(int argc, const char * argv[])
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 4; i++) {
        makenum();
        cal();
        output();
    }
    
    int password;
    do {
        std::cout << "请输入密码:" << std::endl;
        std::cin >> password;
    } while (verifyPassword(password));
    std::cout << "欢迎进入系统!" << std::endl;
    
    return 0;
}

int buffer;//定义全局变量，以下函数都能使用它

void makenum()
{
    std::cout << "Running make number..." << std::endl;
    buffer = rand();
}

void cal()
{
    std::cout << "Running calculate..." << std::endl;
    buffer %= 100;
}

void output()
{
    std::cout << "Running output..." << std::endl;
    std::cout  << buffer << std::endl;
}

bool verifyPassword(int pw)
{
    static short numOfRun = 0;
    bool resutl = true;
    if (pw == 123456) {
         resutl = false;
        numOfRun = 0;
    }
    numOfRun++;
    if (numOfRun>=3) {
        std::cout << "您已经输错密码三次！异常退出！" << std::endl;
        exit(0);
    }

    return resutl;
}

