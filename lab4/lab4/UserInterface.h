#pragma once

#include "Service.h"

#include <stack>
#include <iostream>


using namespace std;

class UserInterface
{
private:
	Service s;
	stack <char> undo;
	stack <Note> added;
	stack <Note> deleted;
	stack <Note> modified;
	stack <Note> points;
	Note old_ex;
	Note n;

public:
	UserInterface();
	~UserInterface();
	void show_menu();
	void add();
	void modify();
	void del();
	void show_all();
	void undo_changes();
	void add_points();
	void show_grades();
	void OwO();
	void find_entry();

};

