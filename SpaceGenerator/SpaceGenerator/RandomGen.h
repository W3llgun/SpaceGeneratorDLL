#pragma once
#include "Export.h"
#include <random>
#include <string>
//#define DllExport   __declspec( dllexport )  

class SG_EXPORT RandomGen
{
private:
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution;
public:
	RandomGen(int seed);
	~RandomGen();

	float Float(int min = 0, int max = 1);
	int Int(int min, int max);
	char CharRange(char charStart, int length);
	char ValidChar();
	char Letter();
	char LetterMaj();
	char Number();
	std::string Word(int length);
	
};

