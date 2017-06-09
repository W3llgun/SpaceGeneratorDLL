#include "GeneratedElement.h"

std::string GeneratedElement::getName()
{
	return name;
}

int GeneratedElement::getSeed()
{
	return baseSeed;
}

GeneratedElement::GeneratedElement(int s)
{
	this->baseSeed = s;
	this->name = "";
}

GeneratedElement::GeneratedElement(std::string n)
{
	this->baseSeed = static_cast<int>(std::hash<std::string>()(name));
	this->name = n;
}


GeneratedElement::~GeneratedElement()
{
}
