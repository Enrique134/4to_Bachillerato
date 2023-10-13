const int COLUMNS = 5;
const int ROWS = 5;

#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

int Matrix[ROWS][COLUMNS];

int main(void)
{
    printf("Write matrix elements:\n");

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLUMNS; j++) {
            printf("row %i column %i: ", i, j);
            cin>> Matrix[i][j];
        }
    }

    int maxrow = -1, maxsum = -1, zeros, negatives, positives;

    for(int i = 0; i < ROWS; i++) {
        int rowsum;

        for(int j = 0; j < COLUMNS; j++) {
            rowsum += Matrix[i][j];

            if(Matrix[i][j]) {
                zeros++;
            } else if(Matrix[i][j]) {
                positives++;
            } else {
                negatives++;
            }
        }

        if(rowsum > maxsum) {
            maxsum = rowsum;
            maxrow = i;
        }
    }

    printf("\nrow with highest sum is %i with %i.\nzeros = %i\npositives = %i\nnegatives = %i", 
    maxrow, maxsum, zeros, positives, negatives);

    getch();
    return 0;    
}
