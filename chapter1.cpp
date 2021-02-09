#include <iostream>

class Chap
{
public:
	Chap(int n) : number(n)
	{
	 std::cout << "Constructor chapter " << number << std::endl;
	}
	~Chap()
	{
	std::cout << "Destructor for " << number << " called" << std::endl;
	}

	void setName(std::string name)
	{
	chapterName = name;
	}
	void getName()
	{
	std::cout << chapterName << std::endl;
	}
private:
	int number = 0;
	std::string chapterName = "no name";
};

int main()
{
	Chap c(1);
	Chap d(2);

	c.getName();
	d.setName("Introduction");
	d.getName();
}
