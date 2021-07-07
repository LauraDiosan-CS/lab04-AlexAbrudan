#include "tests.h"
#include <iostream>


void test_constructor1()
{
	Note n;
	assert(n.get_date() == NULL);
	assert(n.get_name() == NULL);
	assert(n.get_grade() == 0);
}

void test_constructor2()
{
	char* name = new char[strlen("Ion")+1];
	char* date = new char[strlen("20/01/2000")+1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);
	assert(strcmp(n.get_name(), name) == 0);
	assert(strcmp(n.get_date(), date)==0);
	assert(n.get_grade() == 8);
}

void test_get_name()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);
	assert(strcmp(n.get_name(), name)==0);
}

void test_get_date()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);
	assert(strcmp(n.get_date(), date) == 0);
}

void test_get_grade()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);
	assert(n.get_grade() == 8);
}

void test_set_name()
{
	char* name = new char[strlen("Ion") + 1];
	char* new_name = new char[strlen("Misu") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);
	strcpy_s(new_name, sizeof "Misu", "Misu");
	n.set_name(new_name);
	assert(strcmp(n.get_name(), new_name) == 0);
}

void test_set_date()
{
	char* name = new char[strlen("Ion") + 1];
	char* new_date = new char[strlen("2/2/2222") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);
	strcpy_s(new_date, sizeof "2/2/2222", "2/2/2222");
	n.set_date(new_date);
	assert(strcmp(n.get_date(), new_date) == 0);
}

void test_set_grade()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);
	n.set_grade(10);
	assert(n.get_grade() == 10);
}

void test_op_attrib()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);

	char* name2 = new char[strlen("Misu") + 1];
	char* date2 = new char[strlen("20/01/2000") + 1];
	strcpy_s(name2, sizeof "Misu", "Misu");
	strcpy_s(date2, sizeof "20/01/2000", "20/01/2000");
	Note n2(name2, date2, 10);

	n = n2;
	
	assert(strcmp(n.get_name(), n2.get_name()) == 0);
	assert(strcmp(n.get_date(), n2.get_date()) == 0);
	assert(n.get_grade() == n2.get_grade());
}

void test_op_equals()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);

	char* name2 = new char[strlen("Misu") + 1];
	char* date2 = new char[strlen("20/01/2000") + 1];
	strcpy_s(name2, sizeof "Misu", "Misu");
	strcpy_s(date2, sizeof "20/01/2000", "20/01/2000");
	Note n2(name2, date2, 10);

	assert((n == n2) == false);
}




void test_constructor_repo()
{
	Repo r;
	assert(r.get_size() == 0);
}

void test_add_grade()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);

	Repo r;

	r.add_grade(n);

	assert(r.get_size() == 1);
}

void test_get_size()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n(name, date, 8);

	Repo r;

	r.add_grade(n);

	assert(r.get_size() == 1);
}

void test_get_all()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n1(name, date, 8);

	char* name2 = new char[strlen("Misu") + 1];
	char* date2 = new char[strlen("20/01/2000") + 1];
	strcpy_s(name2, sizeof "Misu", "Misu");
	strcpy_s(date2, sizeof "20/01/2000", "20/01/2000");
	Note n2(name2, date2, 10);

	Repo r;

	r.add_grade(n1);
	r.add_grade(n2);

	Note* result = r.get_all();
	Note v[2]{ n1, n2 };

	for (int i = 0; i < r.get_size(); i++)
		assert(result[i] == v[i]);
}

void test_modify_grade()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	
	Note n(name, date, 8);

	Repo r;

	r.add_grade(n);

	int new_grade = 10;
	char* new_date = new char[11];
	strcpy_s(new_date, strlen("22/03/2020") + 1, "22/03/2020");

	char* given_name = new char[4];
	strcpy_s(given_name, strlen("Ion") + 1, "Ion");
	r.modify_grade(given_name, new_date, new_grade);

	Note* ex = r.get_all();

	for (int i=0; i<r.get_size(); i++)
		if (strcmp(ex[i].get_name(), given_name) == 0)
		{
			assert(ex[i].get_grade() == new_grade);
			assert(strcmp(ex[i].get_date(), new_date) == 0);
		}
}

void test_del_grade()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");

	Note n(name, date, 8);

	char* name2 = new char[strlen("Misu") + 1];
	char* date2 = new char[strlen("20/01/2000") + 1];
	strcpy_s(name2, sizeof "Misu", "Misu");
	strcpy_s(date2, sizeof "20/01/2000", "20/01/2000");
	Note n2(name2, date2, 10);

	Repo r;

	r.add_grade(n);
	r.add_grade(n2);

	r.delete_grade(n.get_name());

	assert(r.get_all()[0] == n2);
}

void test_find_elem()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");

	Note n(name, date, 8);

	Repo r;

	r.add_grade(n);

	assert(r.find_elem(name).get_grade() == 8);
	assert(strcmp(r.find_elem(name).get_date(), date) == 0);
}


//Service tests

void test_add_s()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");

	Note n(name, date, 8);

	Service s;
	s.add_grade(n);
	assert(s.get_size() == 1);
}

void test_get_all_s()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n1(name, date, 8);

	char* name2 = new char[strlen("Misu") + 1];
	char* date2 = new char[strlen("20/01/2000") + 1];
	strcpy_s(name2, sizeof "Misu", "Misu");
	strcpy_s(date2, sizeof "20/01/2000", "20/01/2000");
	Note n2(name2, date2, 10);

	Service s;
	s.add_grade(n1);
	s.add_grade(n2);

	Note* res = s.get_all();
	Note v[2] = { n1, n2 };

	for (int i = 0; i < s.get_size(); i++)
		assert(res[i] == v[i]);
}

void test_get_size_s()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n1(name, date, 8);

	Service s;
	s.add_grade(n1);

	assert(s.get_size() == 1);
}

void test_modif_s()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");

	Note n(name, date, 8);

	Service s;
	s.add_grade(n);

	int new_grade = 10;
	char* new_date = new char[11];
	strcpy_s(new_date, strlen("22/03/2020") + 1, "22/03/2020");

	char* given_name = new char[4];
	strcpy_s(given_name, strlen("Ion") + 1, "Ion");
	s.modify_grade(name, new_date, new_grade);

	assert(strcmp(s.get_all()[0].get_date(), new_date) == 0);
	assert(s.get_all()[0].get_grade() == 10);
}

void test_del_s()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");

	Note n(name, date, 8);

	Service s;
	s.add_grade(n);

	s.delete_grade(name);
	assert(s.get_size() == 0);
}

void test_find_s()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");

	Note n(name, date, 8);

	Service s;
	s.add_grade(n);

	assert(s.find_elem(name) == n);
}

void test_get_grades()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n1(name, date, 8);

	char* name2 = new char[strlen("Misu") + 1];
	char* date2 = new char[strlen("20/01/2000") + 1];
	strcpy_s(name2, sizeof "Misu", "Misu");
	strcpy_s(date2, sizeof "20/01/2000", "20/01/2000");
	Note n2(name2, date2, 10);

	Service s;
	s.add_grade(n1);
	s.add_grade(n2);

	assert(s.get_grades(8)[0] == n2);
}

void test_add_point()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n1(name, date, 8);

	Service s;
	s.add_grade(n1);
	s.add_point(name);
	assert(s.get_all()[0].get_grade() == 9);
}

void test_remove_points()
{
	char* name = new char[strlen("Ion") + 1];
	char* date = new char[strlen("20/01/2000") + 1];
	strcpy_s(name, sizeof "Ion", "Ion");
	strcpy_s(date, sizeof "20/01/2000", "20/01/2000");
	Note n1(name, date, 8);

	Service s;
	s.add_grade(n1);
	s.remove_point(n1.get_name());
	assert(s.get_all()[0].get_grade() == 7);
}

void all_tests()
{
	test_constructor1();
	test_constructor2();
	test_get_name();
	test_get_date();
	test_get_grade();
	test_set_date();
	test_set_grade();
	test_set_name();
	test_op_attrib();
	test_op_equals();
	test_constructor_repo();
	test_add_grade();
	test_get_all();
	test_get_size();
	test_modify_grade();
	test_del_grade();
	test_find_elem();
	test_add_s();
	test_get_all_s();
	test_get_size_s();
	test_modif_s();
	test_del_s();
	test_find_s();
	test_get_grades();
	test_add_point();
	test_remove_points();
}