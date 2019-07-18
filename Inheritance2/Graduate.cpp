#include "Student.h"
#include "Graduate.h"

//#define DEBUG

const string Graduate::get_diploma_theme() const
{
	return this->diploma_theme;
}
const string& Graduate::set_diolma_theme(const string& diploma_theme)
{
	return this->diploma_theme = diploma_theme;
}
//				Constructors:
Graduate::Graduate
(const string& name, unsigned int age, const string& specialty, unsigned int year, int karma, const string& diploma_thema) :Student(name, age, specialty, year, karma)
{
	this->diploma_theme = diploma_thema;
#ifdef DEBUG
	cout << "GConstructor:\t" << this << endl;
#endif // DEBUG

}
Graduate::~Graduate()
{
#ifdef DEBUG
	cout << "GDestructor:\t" << this << endl;
#endif // DEBUG

}
//			Methods:
void Graduate::info()
{
	Student::info();
	cout << "Тема дипломного проекта: " << diploma_theme << endl;
}
ostream& operator<<(ostream& os, const Graduate& obj)
{
	os << (Student&)obj;
	return os << "Тема дипломного проекта: " << obj.get_diploma_theme() << endl;
}