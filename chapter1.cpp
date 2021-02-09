#include <iostream>

class Chap
{
public:
	Chap(int n) : number(n)
	{ std::cout << "Constructor chapter " << n << std::endl; }
	~Chap(){ std::cout << "Destructor called" << std::endl; }
private:
	int number = 0;
};

int main()
{
	Chap c(1);
	Chap d(2);
}
