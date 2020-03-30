#include "UserInterface.h"
#include <iostream>

using namespace std;

UserInterface::UserInterface()
{

}

UserInterface::~UserInterface()
{

}

void UserInterface::show_menu()
{
	cout << "1. New entry." << endl;
	cout << "2. Show all entries. " << endl;
	cout << "3. Modify entry. " << endl;
	cout << "4. Delete entry." << endl;
	cout << "5. Find entry. " << endl;
	cout << "6. Show entries with grade greater than a given grade. " << endl;
	cout << "7. Add one point to all grades of a given student. " << endl;
	cout << "x. Exit." << endl;
}

void UserInterface::add()
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
    n.set_name(name);
    n.set_grade(grade);
    n.set_date(date);
    s.add_grade(n);
    this->undo.push('a');
    this->added.push(n);
    delete[] name;
    delete[] date;
    cout << endl;
}

void UserInterface::modify()
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
    Note old_ex = s.find_elem(given_name);

    s.modify_grade(given_name, new_date, new_grade);
    this->undo.push('m');
    this->modified.push(old_ex);
    cout << "Entry modified successfully!" << endl << endl;
}

void UserInterface::show_all()
{
    Note* afis = this->s.get_all();
    for (int i = 0; i < this->s.get_size(); i++)
        cout << afis[i] << endl;
    cout << endl;
}

void UserInterface::del()
{
    char* given_name = new char[50];
    cout << "Insert name of deleted entry: ";
    cin >> given_name;
    old_ex = this->s.find_elem(given_name);
    this->s.delete_grade(given_name);
    cout << "Entry deleted successfully!";
    cout << endl << endl;
    this->undo.push('d');
    this->deleted.push(old_ex);
}

void UserInterface::find_entry()
{
    char* given_name = new char[50];
    cout << "Insert name of searched entry: ";
    cin >> given_name;
    cout << this->s.find_elem(given_name);
    cout << endl << endl;
}

void UserInterface::show_grades()
{
    int given_grade = 0;
    cout << "Insert given grade: ";
    cin >> given_grade;
    Note* res = this->s.get_grades(given_grade);
    for (int i = 0; i < this->s.dim_vector(given_grade); i++)
        cout << res[i] << endl;
}

void UserInterface::add_points()
{
    char* given_name = new char[50];
    cout << "Insert given name: ";
    cin >> given_name;
    cout << endl;
    this->s.add_point(given_name);
    cout << "Points added successfully!" << endl;
    this->undo.push('p');
    this->points.push(s.find_elem(given_name));
    delete[] given_name;
}

void UserInterface::undo_changes()
{
    while (!this->undo.empty())
    {
        if (this->undo.top() == 'd')
        {
            this->s.add_grade(this->deleted.top());
            this->deleted.pop();
            this->undo.pop();
            break;
        }
        if (this->undo.top() == 'a')
        {
            this->s.delete_grade(this->added.top().get_name());
            this->added.pop();
            this->undo.pop();
            break;
        }
        if (this->undo.top() == 'm')
        {
            this->s.delete_grade(this->modified.top().get_name());
            this->s.add_grade(this->modified.top());
            this->modified.pop();
            this->undo.pop();
            break;
        }
        if (this->undo.top() == 'p')
        {
            this->s.remove_point(this->points.top().get_name());
            this->points.pop();
            this->undo.pop();
            break;
        }
    }
}

void UserInterface::OwO()
{
    char op = ' ';
    while (true)
    {
        this->show_menu();
        cout << "Introduceti optiunea: ";
        cin >> op;
        cout << endl;
        switch (op)
        {
        case '1':
        {
            this->add();
            break;
        }
        case '2':
        {
            this->show_all();
            break;
        }
        case '3':
        {
            this->modify();
            break;
        }
        case '4':
        {
            this->del();
            break;
        }
        case '5':
        {
            this->find_entry();
            break;
        }
        case '6':
        {
            this->show_grades();
            break;
        }
        case '7':
        {
            this->add_points();
            break;
        }
        case 'u':
        {
            this->undo_changes();
            break;
        }
        case 'x':
        {
            exit(0);
            break;
        }
        }
    }
}