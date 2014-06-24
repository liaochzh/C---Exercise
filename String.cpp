#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string a("abc");
	cout << "Pos \"b\" = " << a.find("b") << endl;
	cout << "Length of a = " << a.length() << endl;
    cout << a << endl;
    a.append("EFG");
    cout << "Length of a = " << a.length() << endl;
    cout << a << endl;

    string b("abcdefg");
    cout << "Pos \"cd\" = " << b.find("cd") << endl;
    cout << "Length of b = " << b.length() << endl;
    cout << b << endl;

    a.insert(3, b);
    cout << a << endl;

    cout << a.compare("ABCDEFG") << endl;
    cout << a.compare(a) << endl;
    cout << a.empty() << endl;
    a.swap(b);
    cout << "String a is " << a << endl << "String b is " << b << endl;

	return 0;
}
