#pragma once
#include "Human.h"

class Teacher :public Human
{
	string specialty;
	int evil;
	unsigned int xp;
public:
	const string& get_specialty() const;
	unsigned int get_xp() const;
	int get_evil() const;
	const string& set_specialty(const string& specialty);
	unsigned int set_xp(unsigned int xp);
	int set_evil(int evil);
	//				Constructors:
	Teacher(const string& name, unsigned int age, const string& specialty, unsigned int xp, int evil);
	~Teacher();
	void info();
	
};
ostream& operator<<(ostream& os, Teacher& obj);