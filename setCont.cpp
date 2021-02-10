#include <iostream>
#include <utility>
#include <cstring>

std::string setChapterTitle(std::string con)
{
	return con;
}

std::string addContents(std::string oldCont, std::string newCont)
{
	std::string contSum;
	contSum.append(oldCont);
	contSum.append(" ");
	contSum.append(newCont);
	return contSum;
}
