#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
    char word[10];
	int s; 

	do {
    cout << "Enter a word: ";
    cin >> word;
    s = strlen(word);
	} while (s > 10);

	cout << "The reversed string is: " << endl;
	for (int i = s; i >= 0; i--)
	{
    cout << word[i];
	}
	
	_getch();
	return 0;
}
