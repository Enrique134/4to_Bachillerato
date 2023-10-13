const int ROWS = 3;
const int COLUMNS = 3;

#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

int Matrix[COLUMNS][ROWS];

int main(void) {
    printf("Write matrix elements:\n");

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            printf("row %i column %i: ", i, j);
            cin>> Matrix[i][j];
        }
    }

    printf("\nthe main diagonal of the matrix is: ");

    for(int i = 0; i < ROWS - 1; i++) {
        printf("%i, ", Matrix[i][i]);
    }   
    
    printf("%i", Matrix[ROWS][ROWS]);

    getch();
    return 0;
}