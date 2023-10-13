#include <iostream>
#include <vector>

#include <conio.h>
#include <stdio.h>

using namespace std;

int main(void) {
    int size;

    printf("write vector size: ");
    cin>> size;
    vector<int> numbers(size);
    
    printf("\nWrite vector values: ");

    for(int i = 0; i < size; ++i) {
        printf("index %i: ", i);
        cin>> numbers[i];
    }

    printf("original vector: ");

    for(int i = 0; i < size - 1; ++i) {
        printf("%i, ", vector[size]);
    }

    printf("%i", vector[size]);
    printf("inverse vector: ");

    for(int i = size - 1; i >= 0; --i) {
        printf("%i, ", vector[size]);
    }

    printf("%i", vector[1]);

    getch();
    return 0;
}