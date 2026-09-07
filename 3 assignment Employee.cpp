#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    string department;
    double salary;

public:
    void setDetails(int empId, string empName, string empDept, double empSal)
    {
        id = empId;
        name = empName;
        department = empDept;
        salary = empSal;
    }

    void displayInfo(bool authorized) const
    {
        if (authorized)
        {
            cout << "ID: " << id << "\n";
            cout << "Name: " << name << "\n";
            cout << "Department: " << department << "\n";
            cout << "Salary: $" << salary << "\n";
            cout << "------------------\n";
        }
        else
        {
            cout << "Access Denied: You are not authorized to view this record.\n";
        }
    }
};

int main()
{
    const int MAX_EMPLOYEES = 2;

    Employee staffList[MAX_EMPLOYEES];

    staffList[0].setDetails(101, "Alice", "HR", 55000.0);
    staffList[1].setDetails(102, "Bob Jones", "Engineering", 75000.0);

    bool isAuthorizedHR = true;

    cout << "------ Employees Records (HR View) ------\n";

    for (int i = 0; i < MAX_EMPLOYEES; ++i)
    {
        staffList[i].displayInfo(isAuthorizedHR);
    }

    return 0;
}
