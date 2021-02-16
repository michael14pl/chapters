#include <iostream>

std::string addContents(std::string oldCont, std::string newCont)
{
	std::string contSum;
	return contSum.append(oldCont + " " + newCont);
}

int contentSigns(std::string text)
	{ return text.length(); }

int contentSignsWithoutSpace(std::string text)
{
	int characters = 0;
	for(char n : text)
	{
		if(n != ' ')
			characters++;
	}
	return characters;
}

void specialLetter(std::string text, char let)
{
	int specialLetterCount = 0;

	for(char n : text)
	{
		if (n == let )
			specialLetterCount++;
	}
	std::cout << "letter " << let << " appears: " << specialLetterCount << " times" << std::endl;
}
