#pragma once
#include "Note.h"


class Repo
{
private:
	Note list[25];
	int dim;
	
public:
	Repo();
	~Repo();
	void add_grade(Note n);
	Note* get_all();
	int get_size();
};

