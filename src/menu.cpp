#include "menu.hpp"

#include <iostream>

using namespace std;

int menu ()
{
	cout << "1. Addition book" << endl;
	cout << "2. Search book" << endl;
	cout << "3. Delete book" << endl;
	cout << "4. Appear all books" << endl;
	cout << "5. Exit" << endl;
	
    cout << '\n';
    
    int number;
    cout << "Select: ";
    cin >> number;
    cout << endl;
    
    while (number<1 || number>5)
	{
    	cout << "Select: ";
        cin >> number;
        cout << endl;
	}
	
	return number;
}









