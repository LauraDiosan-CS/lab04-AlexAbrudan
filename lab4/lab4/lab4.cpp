// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Repo.h"
#include "Note.h"
#include "UI.h"
#include "tests.h"

using namespace std;

int main()
{
    Repo r;
    char op = ' ';
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
    while (true)
    {
        show_menu();
        cout << "Introduceti optiunea: ";
        cin >> op;
        cout << endl;
        switch (op)
        {
            case '1':
            {
                int grade = 0;
                char* name = new char[50];
                char* date = new char[11];
                cout << "Introduceti numele: ";
                cin >> name;
                cout << "Introduceti data: ";
                cin >> date;
                cout << "Introduceti nota: ";
                cin >> grade;
                Note n(name, date, grade);
                r.add_grade(n);
                delete[] name;
                delete[] date;
                cout << endl;
                break;
            }
            case '2':
            {
                Note* afis = r.get_all();
                for (int i = 0; i < r.get_size(); i++)
                    cout << afis[i] << endl;
                cout << endl;
                break;
            }
            case 'x':
            {
                exit(0);
                break;
            }
        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
