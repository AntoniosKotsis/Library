#include "Library.hpp"
#include "menu.hpp"

#include <iostream>
#include <string>

using namespace std;

int main (int argc,char** argv)
{
	int i;
	
	string title;
	string name_writer;
	int year_edition;
	string ISBN;
	
	Library lb;
	
	while (1)
	{
		i = menu ();
		
		cin.ignore(); // clear buffer
	
	    if (i == 1) // addition book
	    {
		   cout << "Title:" << endl;
		   getline (cin,title);
		   cout << endl;
		
		   cout << "Name Writer:" << endl;
		   getline (cin,name_writer);
		   cout << endl;
		
		   cout << "Year edition: ";
		   cin >> year_edition;
		   cout << endl;
		
		   cin.ignore(); // clear buffer
		
		   cout << "ISBN:" << endl;
		   getline (cin,ISBN);
		   cout << endl;
		
		   Book book1 ( title, name_writer, year_edition, ISBN );
		
		   lb.addition_book (book1);
	    }
	    
	    else if (i == 2) // search book
	    {
	    	cout << "Title:" << endl;
	    	getline (cin,title);
	    	cout << endl;
	    	
	    	cout << "Name Writer:" << endl;
	    	getline (cin,name_writer);
	    	cout << endl;
	    	
	    	lb.search_book (title,name_writer);
	    	cout << endl;
		}
		
		else if (i == 3) // delete book
		{
			cout << "ISBN:" << endl;
			getline (cin,ISBN);
			cout << endl;
			
			lb.delete_book (ISBN);
			cout << endl;
		}
	
	    else if (i == 4) // appear all books
	    {
		    lb.print_all_books ();
		    cout << endl;
	    }
	    
	    else break;    // exit
	}
	
	return 0;
}








