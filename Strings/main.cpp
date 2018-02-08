#include <iostream>
#include <string>

using namespace std;

string compose(const string& name, const string& domain)
{
    return name + "@" + domain;
}

void m2(string& s1, string& s2)
{
    s1 = s1 + '\n'; // append newline

    s2 += '\n'; // append newline
}

void m3()
{
    string name = "Niels Stroustrup";

    string s = name.substr(6, 10); // s = "Stroustrup"

    name.replace(0, 5, "nicholas"); // name becomes "nicholas Stroustrup"

    name[0] = toupper(name[0]); // name becomes "Nicholas Stroustrup"


}

void respond(const string& answer)
{
    string incantation = "2011";

    if (answer == incantation){
        // perfom magic
    }else{
        // ...
    }

    // ...
}

int main()
{
    cout << "Strings!" << endl;

    auto addr = compose("dmr", "bell-labs.com");

    cout << addr;

    return 0;
}


