#pragma once
#include "Human.h"



class Graduate :public Student
{
	string diploma_theme;
public:
	const string get_diploma_theme() const;
	const string& set_diolma_theme(const string& diploma_theme);
	//				Constructors:
	Graduate(const string& name, unsigned int age, const string& specialty, unsigned int year, int karma, const string& diploma_thema);
	~Graduate();
	//			Methods:
	void info();
};
ostream& operator<<(ostream& os, const Graduate& obj);