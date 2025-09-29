#include "Library.hpp"

#include <iostream>
#include <string>

using namespace std;

void Library :: addition_book (const Book& a)
{
	bks.push_back (a);
}

void Library :: search_book (const string& title,const string& name_writer)
{
	int exist = 0;
	
	for (const auto& h : bks)
	{
		if (   (title == h.title)  &&  (name_writer == h.name_writer)   ) 
		{
			exist = 1;
			
			cout << "There is the book \n \n";
		    h.print_data ();
		    
			break;
		}
	}
	 
	if (!exist) cout << "There is not the book" << endl;
}

void Library :: delete_book (const string& ISBN)
{
	int exist = 0;
	
	for (auto it = bks.begin(); it != bks.end(); it++)
	{
		if (it->ISBN == ISBN)
		{
			exist = 1;
			bks.erase (it);
			cout << "The book deleted" << endl;
			
			break;
		}
	}
	
	if (!exist) cout << "There is not the ISBN" << endl;
}

void Library :: print_all_books () const
{
	int i = 1; // case for the first book
	
	for (const auto& h : bks)
	{
		cout << "Book " << i << ": \n \n";
		
		h.print_data ();
		cout << endl;
		
		i++;
	}
	
	if (i == 1) cout << "There are not books in the library" << endl;
}








