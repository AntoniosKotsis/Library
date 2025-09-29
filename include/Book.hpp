#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

using namespace std;

class Book
{
        public:
           string title;
           string name_writer;
           int year_edition;
           string ISBN; // International Standard Book Number

           Book (string,string,int,string);
           void print_data () const;
};

#endif

