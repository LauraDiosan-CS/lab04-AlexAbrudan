// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Repo.h"
#include "Note.h"
#include "UI.h"
#include "tests.h"
#include "Service.h"

using namespace std;

int main()
{
    Repo r;
    Service s;
    char op = ' ';

    all_tests();

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
                s.add_grade(n);
                delete[] name;
                delete[] date;
                cout << endl;
                break;
            }
            case '2':
            {
                Note* afis = s.get_all();
                for (int i = 0; i < s.get_size(); i++)
                    cout << afis[i] << endl;
                cout << endl;
                break;
            }
            case '3':
            {
                char* given_name = new char[50];
                char* new_date = new char[11];
                int new_grade = 0;
                cout << "Insert name of modified entry: ";
                cin >> given_name;
                cout << "Insert new date: ";
                cin >> new_date;
                cout << "Insert new grade: ";
                cin >> new_grade;
                cout << endl;
                s.modify_grade(given_name, new_date, new_grade);
                cout << "Entry modified successfully!" << endl << endl;
                break;
            }
            case '4':
            {
                char* given_name = new char[50];
                cout << "Insert name of deleted entry: ";
                cin >> given_name;
                s.delete_grade(given_name);
                cout << "Entry deleted successfully!";
                cout << endl << endl;
                break;
            }
            case '5':
            {
                char* given_name = new char[50];
                cout << "Insert name of searched entry: ";
                cin >> given_name;
                cout << s.find_elem(given_name);
                cout << endl << endl;
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
