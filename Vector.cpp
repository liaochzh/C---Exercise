#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<char> v(0);
	cout << "请输入指令：" << endl;
	char temp;
	do {
       cin >> temp;
       if (temp != '#')
       {
       	 if (temp != '$')
       	 {
       	 	v.push_back(temp);//模拟压栈操作
       	 } else {
            v.pop_back();//模拟退栈操作
       	 }
       }
	} while (temp != '#');

    for (int i = 0; i < v.size(); ++i)
    {
    	cout << v[i];
    }
    cout << endl;

	return 0;
}