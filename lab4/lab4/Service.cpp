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

Note* Service::get_grades(int given_grade)
{
	Note* result = new Note[this->get_size()];
	int dim = 0;
	Note* repo_all = this->r.get_all();
	for (int i = 0; i < this->r.get_size(); i++)
		if (repo_all[i].get_grade() > given_grade)
			result[dim++] = repo_all[i];
	return result;
}

int Service::dim_vector(int given_grade)
{
	Note* result = new Note[this->get_size()];
	int dim = 0;
	Note* repo_all = this->r.get_all();
	for (int i = 0; i < this->get_size(); i++)
		if (repo_all[i].get_grade() > given_grade)
			result[dim++] = repo_all[i];
	return dim;
}

void Service::add_point(char* given_name)
{
	Note* repo_all = this->r.get_all();
	for (int i = 0; i < this->get_size(); i++)
		if (strcmp(repo_all[i].get_name(), given_name) == 0)
			repo_all[i].set_grade(repo_all[i].get_grade() + 1);
}

void Service::remove_point(char* given_name)
{
	Note* repo_all = this->r.get_all();
	for (int i = 0; i < this->get_size(); i++)
		if (strcmp(repo_all[i].get_name(), given_name) == 0)
			repo_all[i].set_grade(repo_all[i].get_grade() - 1);
}