#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "Graduate.h"


#define delimiter "----------------------------------\n"

//#define INHERITANCE
//#define POINTERS_TO_BASE_CLASS

void main()
{
	setlocale(LC_ALL, "");
#ifdef INHERITANCE
	Human h("Василий", 20);
	//h.info();
	//cout << h << endl;
	cout << delimiter;
	Student durko("Дурко Василий", 20, "РПО");
	//durko.info();
	//cout << durko << endl;
	cout << delimiter;
	Teacher pablo("Pablo Escobar", 40, "Массовое производство наркотиков", 25, 50);
	//pablo.info();
	//cout << pablo << endl;
	cout << delimiter;
	Graduate tony("Antonio Montana", 22, "Распространение наркотиков", 5, 90, "Работа с проблемной задолженностью.");
	//tony.info();
	//cout << tony << endl;
	cout << delimiter;
#endif // INHERITANCE
#ifdef POINTERS_TO_BASE_CLASS
	Human* p_h = &h;
	p_h->info();
	Human* p_teacher = &pablo;
	p_teacher->info();
	Human* p_student = &durko;
	p_student->info();
	Human* p_graduate = &tony;
	p_graduate->info();
#endif // POINTERS_TO_BASE_CLASS

	Human* group[] =
	{
		new Student("Дурко Василий", 20, "РПО"),
		new Teacher("Pablo Escobar", 40, "Массовое производство наркотиков", 25, 50),
		new Graduate("Antonio Montana", 22, "Распространение наркотиков", 5, 90, "Работа с проблемной задолженностью."),
		new Teacher("Albert Einstein", 150, "Phisics", 120, 8)
	};

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		//group[i]->info();
		/*if (typeid(*group[i]) == typeid(Student))cout << *(Student*)group[i] << endl;
		if (typeid(*group[i]) == typeid(Teacher))cout << *(Teacher*)group[i] << endl;
		if (typeid(*group[i]) == typeid(Graduate))cout << *(Graduate*)group[i] << endl;
*/
		if (typeid(*group[i]) == typeid(Student))cout << *dynamic_cast<Student*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Teacher))cout << *dynamic_cast<Teacher*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Graduate))cout << *dynamic_cast<Graduate*>(group[i]) << endl;
	}
}