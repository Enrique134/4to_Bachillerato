#include <iostream>
#include <string>

#include <conio.h>
#include <stdio.h>

using namespace std;

const string NAMES[] = {"Aleks", "Byron", "Diana", "Luis", "Zanate"};

int main(void) {
    int count = sizeof(NAMES) / sizeof(NAMES[0]), index;
    string search;
    bool searchSucess;

    printf("write the name you want to search: ");
    cin>> search;

    for(int i = 0; i < count; i++) {
        if(NAMES[i] == search) {
            searchSucess = true;
            index = i;
            break;
        }
    }

    if(searchSucess) {
        printf("\nname \"%s\" encountered at position %i", search, index);
    } else {
        printf("\nname \"%s\" not found!", search);
    }

    getch();
    return 0;
}
