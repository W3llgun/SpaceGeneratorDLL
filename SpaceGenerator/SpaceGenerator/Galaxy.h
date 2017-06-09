#pragma once
#include "Export.h"
#include "GeneratedElement.h"
#include <vector>

class SG_EXPORT Galaxy : public GeneratedElement
{
public:

	Galaxy(std::string n, int elemCount);

	Galaxy(int s, int elemCount);

	std::vector<int>* getGalaxyElements();
	int getElementsCount();
	int getSeedAt(int index);

	~Galaxy();

private:
	void Generate(int elemCount);
	std::vector<int> galaxyElements;
};

