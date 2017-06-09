#pragma once
#include "GeneratedElement.h"
#include "Planet.h"

class StarSystem : public GeneratedElement
{
protected:
	std::vector<Planet> planets;
	int planetCount;
public:
	StarSystem(int seed) : GeneratedElement(seed)
	{
		RandomGen gen(seed);
		name = gen.Word(6);
		planetCount = gen.Int(0, 8);

		planets = std::vector<Planet>();
		for (int i = 0; i < planetCount; i++)
		{
			planets.push_back(Planet(name +" "+ (char)i));
		}

		//position = new Vector3(rnd.Next(-10, 10), rnd.Next(-10, 10), rnd.Next(-10, 10));
	}
	
	~StarSystem();
};