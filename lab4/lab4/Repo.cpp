#include "Repo.h"


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
