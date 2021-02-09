#include <iostream>

class Chap
{
public:
	Chap(int n) : number(n)
	{
	 std::cout << "Constructor chapter " << n << std::endl;
	}
	~Chap()
	{
	std::cout << "Destructor called" << std::endl;
	}

	void setName(std::string name)
	{
	std::string chapterName = name;
	}
private:
	int number = 0;
	std::string name = "no name";
};

int main()
{
	Chap c(1);
	Chap d(2);
}
