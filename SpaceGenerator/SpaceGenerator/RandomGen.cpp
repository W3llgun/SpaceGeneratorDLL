#include "RandomGen.h"

// min and max inclusive
float RandomGen::Float(int min, int max)
{
	distribution = std::uniform_int_distribution<int>(0, INT_MAX);

	return min + static_cast <float> (distribution(generator)) / (static_cast <float> (INT_MAX / (max - min)));
}

// min and max inclusive
int RandomGen::Int(int min, int max)
{
	distribution = std::uniform_int_distribution<int>(min, max);
	return distribution(generator);
}

char RandomGen::CharRange(char charStart, int length)
{
	distribution = std::uniform_int_distribution<int>(0, length);
	return charStart + distribution(generator);
}

char RandomGen::ValidChar()
{
	int val = Int(0, 2);
	if (val == 0)
	{
		return Letter();
	}
	else if (val == 1)
	{
		return LetterMaj();
	}
	else
	{
		return Number();
	}
}

char RandomGen::Letter()
{
	return CharRange('a', 25);
}

char RandomGen::LetterMaj()
{
	return CharRange('A', 25);
}

char RandomGen::Number()
{
	return CharRange('0', 8);
}

std::string RandomGen::Word(int length)
{
	std::string tempStr = "";
	for (int i = 0; i < length; i++)
	{
		tempStr += ValidChar();
	}
	return tempStr;
}

RandomGen::RandomGen(int seed)
{
	generator = std::default_random_engine(seed);
}


RandomGen::~RandomGen()
{
}
