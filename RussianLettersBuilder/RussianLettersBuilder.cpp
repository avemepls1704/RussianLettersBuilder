// RussianLettersBuilder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

string getСonstructedLetter(char russianLetter);

int main()
{
	setlocale(LC_ALL, "Russian");
	
    return 0;
}

string getСonstructedLetter(char russianLetter)
{
	char russianLowerLetter = tolower(russianLetter);

	static map <char, string> latterMap = {
		{ 'а', "A" },
		{ 'б', "6" },
		{ 'л', "JI" },
		{ 'в', "I3" },
		{ 'ь', "b" },
		{ 'п', "n" },
	};

	return latterMap.at(russianLowerLetter);
}

