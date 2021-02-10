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
	void setChapterContent(std::string chapCont)
	{
	chapterContent = chapCont;
	}
	std::string getChapterContent()
	{
	return chapterContent;
	}
private:
	int number = 0;
	std::string chapterName = "no name";
	std::string chapterContent = "";
};

int main()
{
	std::vector<Chap> chapters{0, 1, 2};

	chapters[1].setName("Once upon the time...");
	std::cout << "Chapter title: ";
	chapters[1].getName();

	chapters[1].setChapterContent("Here will be first part of chapter.");
	std::string firstPartChapter = chapters[1].getChapterContent();
	std::cout << "Content1: " << firstPartChapter << std::endl;

	chapters[1].setChapterContent(addContents(firstPartChapter, "Here will be second part of chapter."));
	std::string secondPartChapter = chapters[1].getChapterContent();
	std::cout << "Content2: " << secondPartChapter << std::endl;
}
