#include <iostream>
#include <vector>
#include <utility>
#include "setCont.cpp"


class Chap
{
public:
	Chap(int n) : number(n)
		{ std::cout << "Constructor chapter " << number << std::endl; }
	~Chap()
		{ std::cout << "Destructor for chapter " << number << " called" << std::endl; }

	void setName(std::string name)
		{ chapterName = name; }
	void getName()
		{ std::cout << chapterName << std::endl; }

	void setChapterContent(std::string chapCont)
		{ chapterContent = chapCont; }
	std::string getChapterContent()
		{ return chapterContent; }

private:
	int number = 0;
	std::string chapterName = "no name";
	std::string chapterContent = "";
};

int main()
{
	Chap chapter1(1);

	chapter1.setName("Once upon the time...");
	std::cout << "Chapter title: ";
	chapter1.getName();

	chapter1.setChapterContent("Here will be first part of chapter.");
	std::string firstPartChapter1 = chapter1.getChapterContent();
	std::cout << "Content1: " << firstPartChapter1 << std::endl;

	chapter1.setChapterContent(addContents(firstPartChapter1, "Here will be second part of chapter."));
	firstPartChapter1 = chapter1.getChapterContent();
	std::cout << "Content1 - update: " << firstPartChapter1 << std::endl;

	std::cout << "sum of signs in chapter1: " << contentSigns(firstPartChapter1) << std::endl;
	std::cout << "letter 'e' appears: " << specialLetter(firstPartChapter1, 'e') << " times" << std::endl;
	std::cout << "letter 'a' appears: " << specialLetter(firstPartChapter1, 'a') << " times" << std::endl; 
	std::cout << "letter 'i' appears: " << specialLetter(firstPartChapter1, 'i') << " times" << std::endl;
	std::cout << "letter 'o' appears: " << specialLetter(firstPartChapter1, 'o') << " times" << std::endl;
	std::cout << "letter 'u' appears: " << specialLetter(firstPartChapter1, 'u') << " times" << std::endl;
	std::cout << "letter 'y' appears: " << specialLetter(firstPartChapter1, 'y') << " times" << std::endl;
}
