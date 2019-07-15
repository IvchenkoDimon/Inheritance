#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "Graduate.h"

#define delimiter "\n----------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	Human h("Василий", 20);
	//h.info();
	cout << h << endl;
	cout << delimiter << endl;
	Student durko("Дурко Василий", 20, "РПО");
	//durko.info();
	
	cout << durko << endl;
	
	Teacher pablo("Pablo Escobar", 40, "Распространение наркотиков", 25, 50);
	//pablo.info();
	cout << delimiter << endl;
	cout << pablo << endl;
	cout << delimiter << endl;
	Graduate tony("Antonio Montana", 22, "Распространение наркотиков", 5, 90, "Работа с проблемной задолженностью.");
	//tony.info();
	cout << delimiter << endl;

	cout << delimiter << endl;
}