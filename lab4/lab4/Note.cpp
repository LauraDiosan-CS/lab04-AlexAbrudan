#include "Note.h"
#include <cstddef>
#include <string.h>


Note::Note()
{
	this->name = NULL;
	this->date = NULL;
	this->grade = 0;
}

Note::Note(char* name, char* date, int grade)
{
	this->name = new char[strlen(name) + 1];
	this->date = new char[strlen(date) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	strcpy_s(this->date, strlen(date) + 1, date);
	this->grade = grade;
}

Note::Note(const Note& n)
{
	this->name = new char[strlen(n.name) + 1];
	this->date = new char[strlen(n.date) + 1];
	strcpy_s(this->name, strlen(n.name) + 1, n.name);
	strcpy_s(this->date, strlen(n.date) + 1, n.date);
	this->grade = n.grade;
}

Note::~Note()
{
	if (this->name && this->date)
	{
		delete[] this->name;
		delete[] this->date;
		this->name = NULL;
		this->date = NULL;
	}
}

char* Note::get_name()
{
	return this->name;
}

char* Note::get_date()
{
	return this->date;
}

int Note::get_grade()
{
	return this->grade;
}

void Note::set_name(char* new_name)
{
	if (this->name)
	{
		delete[] this->name;
		this->name = NULL;
	}
	this->name = new char[strlen(new_name) + 1];
	strcpy_s(this->name, strlen(new_name) + 1, new_name);
}

void Note::set_date(char* new_date)
{
	if (this->date)
	{
		delete[] this->date;
		this->date = NULL;
	}
	this->date = new char[strlen(new_date) + 1];
	strcpy_s(this->date, strlen(new_date) + 1, new_date);
}

void Note::set_grade(int new_grade)
{
	this->grade = new_grade;
}

Note& Note::operator=(const Note& n)
{
	this->set_name(n.name);
	this->set_date(n.date);
	this->set_grade(n.grade);
	return *this;
}

bool Note::operator==(const Note& n)
{
	return (strcmp(this->date, n.date) == 0 && strcmp(this->name, n.name) == 0 && this->grade == n.grade);
}

ostream& operator<<(ostream& os, const Note& n)
{
	os << n.name << " " << n.date << " " << n.grade;
	return os;
}
