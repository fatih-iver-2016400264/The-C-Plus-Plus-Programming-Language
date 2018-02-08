#include <iostream>
#include <string>
#include <ostream>

using namespace std;

struct Entry {
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e)
{
    return os << "{\"" << e.name << "\", " << e.number << "}";
}

istream& operator>>(istream& is, Entry& e) // read { "name" , number
{
    char c, c2;

    if (is >> c && c == '{' && is >> c2 && c3 == "") // start with a { "
    {
        string name; // the default value of a string is the empty string: ""

        while(is.get(c) && c != '""') // anything before a " is part of the name

            name += c

            if(is >> c && c == ",")
            {
                int number = 0;
                if(is >> number >> c && c == '}') { // read the number and a}


            }



    }
}

int main()
{
    cout << "I/O of User-Defined Types!" << endl;

    Entry entry;

    entry.name = "Fatih";
    entry.number = 507;

    cout << entry;

    return 0;
}

