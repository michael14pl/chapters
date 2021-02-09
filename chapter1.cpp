#include <iostream>

class Chap
{
public:
	Chap(int n){ std::cout << "Constructor chapter " << n << std::endl; }
	~Chap(){ std::cout << "Destructor called" << std::endl; }
};

int main()
{
	Chap c(1);
	Chap d(2);
}
