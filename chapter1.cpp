#include <iostream>
#include <vector>
#include <utility>
#include "setCont.cpp"


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
	std::vector<Chap> chapters{0, 1, 2};
	std::pair<int, std::string>firstContent;
	firstContent = setContent(1, "Unce upon the time...");
	chapters[1].setName(firstContent.second);
	chapters[1].getName();
}
