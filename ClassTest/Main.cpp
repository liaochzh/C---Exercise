#include "Class.h"
// #include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Node a;
    Node b(8);
    Node c(8, 'F', &a, &b);
    cout << a.readi() << " " << a.readc() << endl;
    cout << b.readi() << " " << b.readc() << endl;
    cout << c.readi() << " " << c.readc() << endl;
    
	return 0;
}