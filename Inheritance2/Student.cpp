#include "Student.h"

//#define DEBUG

const string& Student::get_specialty() const
{
	return this->specialty;
}
unsigned int Student::get_year() const
{
	return this->year;
}
int Student::get_karma() const
{
	return this->karma;
}
const string& Student::set_specialty(const string& specialty)
{
	return this->specialty = specialty;
}
unsigned int Student::set_year(unsigned int year)
{
	return this->year = year;
}
int Student::set_karma(int karma)
{
	return this->karma = karma;
}
//				Constructors:
Student::Student(const string& name, unsigned int age,const string& specialty, unsigned int year, int karma) :Human(name, age)
{
	this->specialty = specialty;
	this->year = year;
	this->karma = karma;
#ifdef DEBUG
	cout << "SConstructor:\t" << this << endl;
#endif // DEBUG

}
Student::~Student()
{
#ifdef DEBUG
	cout << "SDestructor:\t" << this << endl;
#endif // DEBUG

}
//			Methods:
void Student::info()
{
	Human::info();
	cout << "C������������: " << specialty << " " << year << "-� ����, ������������ " << karma << "!" << endl;
}
ostream & operator<<(ostream & os, const Student & obj)
{
	// TODO: insert return statement here
	os << (Human&)obj;
	return os << endl << "�������������: " << obj.get_specialty() << " " << obj.get_year() << "-� ����, ������������ " << obj.get_karma() << "!" << endl;
}
