#include "Service.h"


Service::Service()
{

}

Service::~Service()
{

}

void Service::add_grade(Note n)
{
	this->r.add_grade(n);
}

void Service::modify_grade(char* given_name, char* new_date, int new_grade)
{
	this->r.modify_grade(given_name, new_date, new_grade);
}

void Service::delete_grade(char* given_name)
{
	this->r.delete_grade(given_name);
}

Note Service::find_elem(char* given_name)
{
	return this->r.find_elem(given_name);
}

Note* Service::get_all()
{
	return this->r.get_all();
}

int Service::get_size()
{
	return this->r.get_size();
}