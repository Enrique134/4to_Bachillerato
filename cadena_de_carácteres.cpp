const int REQUIRED_STRING_SIZE = 10;

#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

int main(void) {
    string _string;

    printf("write a string: ");
    cin>> _string;

    if(_string.length() > REQUIRED_STRING_SIZE) {
        printf("the input string is \"%s\"", _string);
    } else {
        printf("the string is no more than %i characters", REQUIRED_STRING_SIZE);
    }

    getch();
    return 0;
}
