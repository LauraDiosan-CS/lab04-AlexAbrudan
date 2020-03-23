#include "Repo.h"
#include <iostream>

Repo::Repo()
{
	this->dim = 0;
}

Repo::~Repo()
{
	this->dim = 0;
}

void Repo::add_grade(Note n)
{
	this->list[this->dim++] = n;
}

Note* Repo::get_all()
{
	return this->list;
}

int Repo::get_size()
{
	return this->dim;
}

void Repo::modify_grade(char* given_name, char* new_date, int new_grade)
{
	for (int i=0; i<this->dim; i++)
		if (strcmp(this->list[i].get_name(), given_name) == 0)
		{
			this->list[i].set_date(new_date);
			this->list[i].set_grade(new_grade);
			//cout << this->list[i].get_date() << endl << this->list[i].get_grade() << endl;
		}
}

void Repo::delete_grade(char* given_name)
{
	char* zero = new char[2];
	strcpy_s(zero, sizeof "0", "0");
	for (int i=0; i<this->dim; i++)
		if (strcmp(this->list[i].get_name(), given_name) == 0)
		{
			this->list[i]=this->list[dim-1];
			this->dim--;
		}
}

Note Repo::find_elem(char* given_name)
{
	for (int i = 0; i < this->dim; i++)
		if (strcmp(this->list[i].get_name(), given_name) == 0)
			return this->list[i];
}