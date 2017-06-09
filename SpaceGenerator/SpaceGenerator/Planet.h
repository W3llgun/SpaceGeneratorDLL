#pragma once
#include "GeneratedElement.h"

class Planet : public GeneratedElement
{
public:
	Planet(std::string name) : GeneratedElement(name)
	{
		
	}

	Planet(int s) :GeneratedElement(s)
	{

	}

	~Planet();
private:
	void GeneratePlanet(int s);
};

