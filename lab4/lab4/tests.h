#pragma once
#include "Note.h"
#include "Repo.h"
#include <assert.h>
#include "Service.h"

//Note tests
void test_constructor1();
void test_constructor2();
void test_get_name();
void test_get_date();
void test_get_grade();
void test_set_name();
void test_set_date();
void test_set_grade();
void test_op_attrib();
void test_op_equals();

//Repo tests

void test_constructor_repo();
void test_add_grade();
void test_get_all();
void test_get_size();
void test_modify_grade();
void test_del_grade();
void test_find_elem();

//Service tests
void test_add_s();
void test_get_all_s();
void test_get_size_s();
void test_modif_s();
void test_del_s();
void test_find_s();

//All tests
void all_tests();
