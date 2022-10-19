#include <iostream>

using namespace std;

class Employee
{
public:
    virtual void getData()
    {

    }
    virtual void vacation()
    {

    }
    virtual void healthContribution()
    {

    }
    virtual void weeklySalary()
    {

    }
};
class Professional :public Employee {

public:
    int days;
    int perDaySalary = 1000;
    void getData()
    {
        cout << "Enter number of days you worked in a week: " << endl;
        cin >> days;
    }
    void vacation()
    {
        if (days >= 5)
        {
            cout << "You are eligible for vacation days: " << endl;
        }
        else
        {
            cout << "Sorry no vacation days: " << endl;
        }
    }
    void healthContribution()
    {
        // you can add custom data according to your needs
    }
    void  weeklySalary()
    {
        cout << "Weekly salary is :" << days * perDaySalary << endl;
    }

};
class nonProfessional :public Employee {

public:
    int hours;
    int perHourSalary = 100;
    void getData()
    {
        cout << "Enter no of hours you worked in a week: " << endl;
        cin >> hours;
    }
    void vacation()
    {
        if (hours >= 30)
        {
            cout << "You are eligible for vacation days: " << endl;
        }
        else
        {
            cout << "Sorry no vacation days: " << endl;
        }
    }
    void healthContribution()
    {
        // add custom data according to you
    }
    void weeklySalary()
    {
        cout << "your weekly salary is: " << hours * perHourSalary << endl;
    }
};

int main()
{
    Employee* e;
    Professional p;

    e = &p;
    e->getData();
    e->weeklySalary();
    e->vacation();

    nonProfessional np;
    e = &np;
    e->getData();
    e->weeklySalary();
    e->vacation();

    return 0;
}