#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int day, day1, day2, day3, day4, day5, asd, fgh;
	double temp[21];
	
	fgh = 0;
	asd = 0;
	day = 1;
	day1 = 1;
	day2 = 1;
	day3 = 1;
	day4 = 1;
	day5 = 1;
	
	cout << "Enter all temperatures for Province A:\n" << endl;
	
	for(asd = 0; asd < 21 && day < 8; asd++)
	{
		cout << "Province A, Day " << day << ":";
		cin >> temp[asd];
		day++;
	}
	
	cout << "\nEnter all temperatures for Province B:" << endl;
	
	for(;asd < 21 && day1 < 8; asd++ && day1++)
	{
		cout << "Province B, Day " << day1 << ":";
		cin >> temp[asd];
	}
	
	cout << "\nEnter all temperatures for Province C:" << endl;
	
	for(;asd < 21 && day2 < 8; asd++ && day2++)
	{
		cout << "Province C, Day " << day2 << ":";
		cin >> temp[asd];
	}
	
	cout << "\n\n";
	
	for(fgh = 0; fgh < 21 && day3 < 8; fgh++ && day3++)
	{
		cout << "Province A, Day " << day3 << ": " << temp[fgh] << endl; 
	}
	
	for(; fgh < 21 && day4 < 8; fgh++ && day4++)
	{
		cout << "Province B, Day " << day4 << ": " << temp[fgh] << endl; 
	}
	
	for(; fgh < 21 && day5 < 8; fgh++ && day5++)
	{
		cout << "Province C, Day " << day5 << ": " << temp[fgh] << endl; 
	}
	
	_getch();
	return 0;
}
