#include "Book.hpp"

#include <iostream>
#include <string>

using namespace std;

Book :: Book (string t,string name,int year,string ISBN2)
{
    title = t;
    name_writer = name;
    year_edition = year;
    ISBN = ISBN2;
}

void Book :: print_data () const
{
	cout << "Title: " << title << endl;
	cout << "Name Writer: " << name_writer << endl;
	cout << "Year Edition: " << year_edition << endl;
	cout << "ISBN: " << ISBN << endl;
}




