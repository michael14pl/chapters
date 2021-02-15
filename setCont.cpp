#include <iostream>

std::string addContents(std::string oldCont, std::string newCont)
{
	std::string contSum;
	return contSum.append(oldCont + " " + newCont);
}

int ContentSigns(std::string text)
{
	return text.length();
}

int SpecialLetter(std::string text, char let)
{
	int specialLetterCount = 0;

	for(char n : text)
	{
		if (n == let )
			specialLetterCount++;
	}
	return specialLetterCount;
}
