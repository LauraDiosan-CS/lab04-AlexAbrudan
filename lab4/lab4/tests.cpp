#include "tests.h"

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