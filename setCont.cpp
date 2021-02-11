#include <iostream>

std::string addContents(std::string oldCont, std::string newCont)
{
	std::string contSum;
	contSum.append(oldCont);
	contSum.append(" ");
	contSum.append(newCont);
	return contSum;
}
