#pragma once

#include <ostream>

using namespace std;


class Note
{
private:
	char* name;
	char* date;
	int grade;
public:
	Note();
	Note(char* name, char* date, int grade);
	Note(const Note& n);
	~Note();

	char* get_name();
	char* get_date();
	int get_grade();

	void set_name(char* new_name);
	void set_date(char* new_date);
	void set_grade(int new_grade);

	Note& operator=(const Note& n);
	bool operator==(const Note& n);

	friend ostream& operator<<(ostream& os, const Note& n);
};

