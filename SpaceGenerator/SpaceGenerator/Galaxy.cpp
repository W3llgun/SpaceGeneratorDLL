#include "Galaxy.h"

Galaxy::Galaxy(std::string n, int elemCount) : GeneratedElement(n)
{
	Generate(elemCount);
}

Galaxy::Galaxy(int s, int elemCount) : GeneratedElement(s)
{
	Generate(elemCount);
}

std::vector<int>* Galaxy::getGalaxyElements()
{
	return &galaxyElements;
}

int Galaxy::getElementsCount()
{
	return (int)galaxyElements.size();
}

int Galaxy::getSeedAt(int index)
{
	if (index < this->getElementsCount() && index > 0)
	{
		return galaxyElements[index];
	}
	return 0;
}

Galaxy::~Galaxy()
{
}

void Galaxy::Generate(int elemCount)
{
	galaxyElements = std::vector<int>();
	RandomGen gen(baseSeed);
	int range = INT_MAX - 1;
	for (int i = 0; i < elemCount; i++)
	{
		galaxyElements.push_back(gen.Int(-range, range));
	}
}
