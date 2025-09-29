#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"

#include <vector>
#include <string>

using namespace std;

class Library
{
	private:
		vector <Book> bks;
		
	public:
		void addition_book (const Book&);
		void search_book (const string&,const string&);
		void delete_book (const string&);
		void print_all_books () const;
};

#endif


