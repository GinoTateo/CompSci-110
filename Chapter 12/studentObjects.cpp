// Lab 12.2
// Programmer: Gino Tateo
// Editor(s) used: Xcode
// Compiler(s) used: Xcode

#include <iostream>
#include <string>

using namespace std;

static int numStudentsMade = 0;
static int numStudentsShow = 0;

struct Student{
            string name;
            string address;
            string city;
            string state;
            string zip;
            string gender;
            string studentID;
            string gpa;
};

Student makeStudent(Student s)
{
            numStudentsMade++;
            cout << "Enter for Student " << numStudentsMade << endl;
                cout << " name: ";
            getline(cin,s.name);
                cout << " address: ";
            getline(cin,s.address);
                cout << " city: ";
            getline(cin,s.city);
                cout << " state: ";
            getline(cin,s.state);
                cout << " zip: ";
            getline(cin,s.zip);
                cout << " gender: ";
            getline(cin,s.gender);
                cout << " student id: ";
            getline(cin,s.studentID);
                cout << " GPA: ";
            getline(cin,s.gpa);
                cout << endl;
    return s;
}

void showStudent(Student s)
{
    numStudentsShow++;
    cout << "Output for Student " << numStudentsShow << endl;
    cout << "Name: " << s.name << endl;
    cout << "Address: " << s.address << endl;
    cout << "City: " << s.city << endl;
    cout << "State: " << s.state << endl;
    cout << "Zip: " << s.zip << endl;
    cout << "Gender: " << s.gender << endl;
    cout << "Student ID: " << s.studentID << endl;
    cout << "GPA: " << s.gpa << endl;
    cout << endl;
}

int main()
{
    cout << "Programmer: Gino Tateo" << endl;
    cout << "Description: This program outputs alabeled summary of personal information." << endl;
    cout << endl;
    
        Student students[3];
        students[0]=makeStudent(students[0]);
        students[1]=makeStudent(students[1]);
        students[2]=makeStudent(students[2]);
        showStudent(students[0]);
        showStudent(students[1]);
        showStudent(students[2]);
}
