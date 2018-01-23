#include <iostream>

using namespace std;

bool accept1();
bool accept2();
bool accept3();

int main()
{
    //cout << accept1();
    //cout << accept2();
    cout << accept3();

    return 0;
}

bool accept1(){

    cout << "Do you want to proceed(y or n)?: "; // write question

    char answer = 0;
    cin >> answer; // read answer

    if (answer == 'y') return true;
    return false;

}

bool accept2(){

    cout << "Do you want to proceed(y or n)?: "; // write question

    char answer = 0;

    cin >> answer;

    switch(answer){

    case 'y':
        return true;
    case 'n':
        return false;
    default:
        cout << "I'll take that for a no.\n";
        return false;
    }
}

bool accept3(){

    int tries = 1;

    while(tries < 4){
        cout << "Do you want to proceed(y or n)?: ";
        char answer = 0;
        cin >> answer;

        switch(answer){

        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "Sorry, I don't understand that. \n";
            ++tries;
        }
    }


    cout << "I'll take that for a no.\n";
    return false;

}




