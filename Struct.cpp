#include <iostream>

typedef struct {
   int idNumber;
   char name[15];
   int age;
   char department[20];
   float gpa;
} Student;

void display(Student arg);

void display1(Student &arg);

void dispalyPoint(Student *arg);

Student initial();

int main(int argc, char const *argv[])
{
	Student s1 = initial();//声明s1，并对s1初始化
    std::cout << "s1.name的地址" << &s1.name << std::endl;
    display(s1);
    std::cout << "形参被修改后......" << std::endl;
    display(s1);

    std::cout << std::endl;

	Student s2 = initial();//声明s2，并对s2初始化
    std::cout << "s2.name的地址" << &s2.name << std::endl;
    display1(s2);
    std::cout << "形参被修改后......" << std::endl;
    display1(s2);

    std::cout << std::endl;

    Student s3 = initial();
    dispalyPoint(&s3);

	return 0;
}

Student initial()
{
	Student student = {428004, "Tomato", 20, "ComputerScience", 84.5};
	return student;
}

void display(Student arg) 
{
	std::cout << "学号：" << arg.idNumber << " 姓名：" << arg.name << " 年龄：" << arg.age << std::endl; 
	std::cout << "院系：" << arg.department << " 成绩：" << arg.gpa << std::endl;
    std::cout << "arg.name的地址" << &arg.name << std::endl;
   for (int i=0; i<6; i++)//企图修改参数的成员数据
   {
      arg.name[i]='A';
   }
   arg.age++;
   arg.gpa=99.9f;
}

void display1(Student &arg)
{
	std::cout << "学号：" << arg.idNumber << " 姓名：" << arg.name << " 年龄：" << arg.age << std::endl; 
	std::cout << "院系：" << arg.department << " 成绩：" << arg.gpa << std::endl;
    std::cout << "arg.name的地址" << &arg.name << std::endl;
    for (int i=0; i<6; i++)//企图修改参数的成员数据
    {
       arg.name[i]='A';
    }
    arg.age++;
    arg.gpa=99.9f;
}

void dispalyPoint(Student *arg)
{
	std::cout << "学号：" << arg->idNumber << " 姓名：" << arg->name << " 年龄：" << arg->age << std::endl; 
	std::cout << "院系：" << arg->department << " 成绩：" << arg->gpa << std::endl;
}


