#include <iostream>

using namespace std;

void intval();
void digits();

int main()
{
    cout << "Character Types!" << endl;
    //intval();
    //digits();

    signed char c = 255; // 255 is "all ones," hexadecimal 0xFF
    int i = c;
    cout << i << '\a';

    char c1[] = "a\xah\129"; // 6 chars 'a' '\xa' 'h' '\12' '9' '\0'
    char c2[] = "a\xah\127"; // 5 chars 'a' '\xa' 'h' '\127' '\0'
    char c3[] = "a\xad\127"; // 4 chars 'a' '\xad' '\127' '\0'
    char c4[] = "a\xad\0127"; // 5 chars 'a' '\xad' '\012' '7' '\0'

    /*
    U'\UFADEBEEF'
    u'\uDEAD'
    u'\xDEAD'
    */


    return 0;
}

void intval()
{
    for(unsigned char c; cin >> c; ){ cout << "the value of " << c << " is " << int{c} << "\n"; }
}

void digits()
{
    for(int i = 0; i != 10; i += 2){ cout << static_cast<char>('a'+i); }
}

void f(char c, signed char sc, unsigned char uc)
{
    // error: no pointer conversion
    /*
    char* pc = &uc;
    signed char* psc = pc;
    unsigned char* puc = pc;
    psc = puc;
    */
}

void f1(char c, signed char sc, unsigned char uc)
{
    c = 255; // implementation-defined if plain chars are signed and have 8 bits
    c = sc; // OK
    c = uc; // implementation-defined if plain chars are signed and if uc's value is too large
    sc = uc; // implementation defined if uc's value is too large
    uc = sc; // OK: conversion to unsigned
    sc = c; // implementation-defined if plain chars are unsigned if c's value is too large
    uc = c; // OK: conversion to unsinged

    signed char _sc = -140;
    unsigned char _uc = sc; // uc == 116 because 256-140 == 116

    cout << _uc; // print 't'

    char count[256]; // assume 8-bit chars (uninitialized)

    char c1 = count[_sc]; // likely disaster: out-of-range access
    char c2 = count[_uc]; // OK
}

