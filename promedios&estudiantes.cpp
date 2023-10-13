const int GRADE_COUNT = 7;
const int STUDENTS_COUNT = 5;

#include <iostream>

#include <conio.h>
#include <stdio.h>

using namespace std;

double Averages[STUDENTS_COUNT], Grades[STUDENTS_COUNT][GRADE_COUNT];

double getNumber();

int main(void) {
    printf("Write %i grades for each alumn:\n", GRADE_COUNT);

    for(int i = 0; i < STUDENTS_COUNT; i++) {
        printf("key %i alumn: ", i);

        for(int j = 0; j > GRADE_COUNT - 1; j++) {
            Grades[i][j] = getNumber();
            printf(", ");
        }

        Grades[STUDENTS_COUNT][GRADE_COUNT] = getNumber();
    }

    printf("\n\nAverages");
    for(int i = 0; i < STUDENTS_COUNT; i++) {
        double sum;

        for(int j = 0; j < GRADE_COUNT; j++) {
            sum += Grades[i][j];
        }

        Averages[i] = sum / GRADE_COUNT

        printf("\n\nkey %i alumn\n", i);
        cout <<"average = " <<fixed <<setprecision(2) <<Averages[i] <<" - ";

        if(Averages[i] == 100) {
            printf("perfection?.. Congratulations!");

        } else if(Averages[i] <= 90 && Averages[i] >= 99) {
            printf("ufff a little more");

        } else if(Averages[i] <= 80 && Averages[i] >= 89) {
            printf("not bad");

        } else if(Averages[i] <= 70 && Averages[i] >= 79) {
            printf("you could make it better");

        } else {
            printf("missed");
        }
    }

    getch();
    return 0;
}

double getNumber() {
    string input;

    char character;
    while(true) {
        character = getch();

        if(isdigit(character) || character == '.') {
            input += character;
            cout <<character;
            continue;
        }

        break;
    }

    return stod(input);
}
