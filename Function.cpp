#include <iostream>

void output(char c);

int main(int argc, const char * argv[])
{
	/* code */
    int r = 3; 
    int s = 5;
    int t ;
    t = std::max(r, s);
    std::cout << t << std::endl;

    char temp = 'c';
    output(temp);

	return 0;
}

void output(char c)
{
	std::cout << c << std::endl;
}
