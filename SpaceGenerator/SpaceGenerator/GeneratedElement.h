#pragma once
#include "Export.h"
#include <string>
#include "RandomGen.h"

class SG_EXPORT GeneratedElement
{
protected:
	int baseSeed;
	std::string name;
public:
	std::string getName();
	int getSeed();
	GeneratedElement(int s);
	GeneratedElement(std::string  n);
	~GeneratedElement();
};

