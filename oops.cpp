#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    double familyIncome;
    string name;
    string dept;
    int rollno;

public:
    // PARAMETERIZED CONSTRUCTOR
    student(string n, string d, int r, double f)
    {
        name = n;
        dept = d;
        rollno = r;
        familyIncome = f;
    }

    void setfamilyIncome(double i)
    {
        familyIncome = i;
    }

    double getfamilyIncome()
    {
        return familyIncome;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "dept: " << dept << endl;
        cout << "rollno: " << rollno << endl;
        cout << "income: " << familyIncome << endl;
    }
};

int main()
{
    student s1("Aditya", "CSE-U", 255109115, 90000);
    s1.getInfo();
}

// INHERITANCE:-
// Inheritance is a fundamental object-oriented programming concept that allows a new class (called a derived class or child class) to inherit properties and behaviors (data members and member functions) from an existing class (called a base class or parent class). This promotes code reusability and establishes a natural hierarchical relationship between classes.

#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    string aukaat;
};

class student : public person
{
public:
    string dept;
    int rollno;

    student(string n, int a, string d, int r, string au)
    {
        name = n;
        age = a;
        dept = d;
        rollno = r;
        aukaat = au;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << dept << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Aukaat: " << aukaat << endl;
    }
};

int main()
{
    student s1("Aditya Raut", 18, "CSE-U", 255109115, "Zero");
    s1.getInfo();
    return 0;
}