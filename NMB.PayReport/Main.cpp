
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

const float tax = 0.15f; // i just felt like adding this after finishing.

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
	float totalAfterTax = 0;
	cout << "Pay Report <<< \n";
	for (int i = 0; i < employeeAmount; i++)
	{
		float pay = employeeInfo[i].HoursWorked * employeeInfo[i].HourlyRate;
		float amountTaxed = pay * tax;
		float afterTax = pay - amountTaxed;
		totalPay += pay;
		totalAfterTax += afterTax;


		cout << "Employee ID: " << employeeInfo[i].ID << ". Employee Name: " << employeeInfo[i].FirstName << " " << employeeInfo[i].LastName << ". Pay: $" << pay;
		cout << " After Tax: $" << afterTax << "\n";
	}


	cout << "\n" << " Total Pay: $" << totalPay <<  " Total Pay after tax: $" << totalAfterTax << "\n";
	
	
	(void)_getch();
	return 0;
}