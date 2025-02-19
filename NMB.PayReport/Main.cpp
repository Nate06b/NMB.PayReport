
#include <iostream>
#include <conio.h>

using namespace std;


struct Employee {
    int ID = 0;
    string FirstName;
    string LastName;
    float HoursWorked = 0;
    float HourlyRate = 0;
};


int main()
{
    int employeeAmount;
    cout << "Enter the Number of emplayees: ";
    cin >> employeeAmount;


    Employee* employeeInfo = new Employee[employeeAmount];

    for (int i = 0; i < employeeAmount; i++)
    {
        cout << "Enter Employees ID: " << i + 1 << ": ";
		cin >> employeeInfo[i].ID;
		cout << "Enter First Name of Employee " << i + 1 << ": ";
		cin >> employeeInfo[i].FirstName;
		cout << "Enter Last Name of Employee " << i + 1 << ": ";
		cin >> employeeInfo[i].LastName;
		cout << "Enter Hours Worked of Employee " << i + 1 << ": ";
		cin >> employeeInfo[i].HoursWorked;
		cout << "Enter Hourly Rate of Employee " << i + 1 << ": ";
		cin >> employeeInfo[i].HourlyRate;
        cout << " \n";
    }

	float totalPay = 0;
	cout << "Pay Report <<< \n";
	for (int i = 0; i < employeeAmount; i++)
	{
		float pay = employeeInfo[i].HoursWorked * employeeInfo[i].HourlyRate;
	    totalPay += pay; 


		cout << "	Employee ID: " << employeeInfo[i].ID << "\n" << "  Employee Name: " << employeeInfo[i].FirstName << " " << employeeInfo[i].LastName << "\n";
		cout << "	Weekly Pay: $" << pay << "\n";
		


				

	}
		cout << "Total pay for all: $" << totalPay << "\n";
		cout << " \n";
	(void)_getch();
	return 0;
}