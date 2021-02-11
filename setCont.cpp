#include <iostream>

std::string addContents(std::string oldCont, std::string newCont)
{
	std::string contSum;
	contSum.append(oldCont + " " + newCont);
	return contSum;
}
