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
};

