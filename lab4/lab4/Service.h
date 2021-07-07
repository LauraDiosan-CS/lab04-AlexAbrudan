#pragma once
#include "Repo.h"


class Service
{
private:
	Repo r;

public:
	Service();
	~Service();
	void add_grade(Note n);
	void modify_grade(char* given_name, char* new_date, int new_grade);
	void delete_grade(char* given_name);
	Note find_elem(char* given_name);
	Note* get_all();
	int get_size();

	Note* get_grades(int given_grade);
	void add_point(char* given_name);
	int dim_vector(int given_grade);
	void remove_point(char* given_name);
};

