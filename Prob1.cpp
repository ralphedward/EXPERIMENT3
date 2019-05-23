#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int no, max, min;
	double num[10], l, s, total, avg;
	
	total = 0;
	max = 0;
	min = 0;
		
	for(no = 0; no < 10; no++)
	{
	cout << "Enter a number: ";
	cin >> num[no];
	total = total + num[no];
	}
	
	for(no = 1; no < 10; no++)
	{
	if (num[max] < num[no])
		max = no;
	}
	
	for(no = 1; no < 10; no++)
	{
	if (num[min] > num[no])
		min = no;
	}
	
	avg = total / 10;
	
	cout << "\nThe sum of all the entered numbers is " << total << "." << endl;
	cout << "The average of all the entered numbers is " << avg << "." << endl;
	cout << "The largest entered integer is " << num[max] << " while the smallest is " << num[min] << "." << endl;
	
	_getch();
	return 0;
}
