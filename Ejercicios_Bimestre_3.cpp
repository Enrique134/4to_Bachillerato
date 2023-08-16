/// Ejercicios - 3er Bimestre

/* ¡LEEME! *\
***********************************************************************************************************************
    Para compilar un ejercicio escribe el número del ejercicio en la macro EJERCICIO (línea 15 "#define EJERCICIO ?")

    Ejercicios: 
        1 = Vector de Números
        2 = Ordenamiento de Arreglo
        3 = Calculadora de Promedio

***********************************************************************************************************************/

// Número de ejercicio a compilar
#define EJERCICIO /*número de ejercicio*/


#pragma optimize("t")

#include<iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>

using namespace std;

namespace program {

    int Status = 1;

    void exitProgram(int status = 0){
        cout <<"\n\nprogram ended, press any key to exit... ";
        getch();
        Status = status;
        exit(Status);
    }

    void console_clear(){system("CLS");}
}

int main();

#if EJERCICIO == 1
//////////////////////////////\
*      Vector de Números      *
//////////////////////////////\
"Escribe  un programa que solicite el tamaño para un vector de números, y le  permita  \
 ingresar dato por dato a cada posición, debe imprimir en pantalla el vector original  \
 y el vector en orden inverso. Del último al primer elemento."                         \

int Vector[] = {};
int VectorInverse[] = {};

main(){
    int vectorSize;

    string vector_s;
    string vectorInverse_s;
    
    cout <<"vector size: ";
    cin>> vectorSize;
    vectorSize -= 1;

    cout <<"\nWrite vector values.\n";

    int input;
    string input_s;
    for(int i = 0; i <= vectorSize; i++){
        cout <<"key " <<i <<" value: ";

        cin>> input;
        input_s = to_string(input);

        Vector[i] = input;
        VectorInverse[vectorSize - i] = input;

        vector_s += "["+to_string(i)+"] = "+input_s+"; ";
        vectorInverse_s.insert(0, "["+to_string(vectorSize - i)+"] = "+input_s+"; ");
    }
    
    vector_s.erase(vector_s.size() - 2);
    vectorInverse_s.erase(vectorInverse_s.size() - 2);

    cout <<"\nResults:\n";
    cout <<"\n- vector\n"+vector_s <<endl;
    cout <<"\n- vector inverse\n"+vectorInverse_s <<endl;

    program::exitProgram();
}


#elif EJERCICIO == 2
//////////////////////////////\
*   Ordenamiento de Arreglo   *
//////////////////////////////\
"Escribe  un  programa  en C++ que tome como entrada un arreglo de 10  edades  y  los  \
 ordene  en  forma  ascendente  utilizando el método de burbuja.  Luego,  muestra  el  \
 arreglo ordenado en la consola."                                                      \

#define AGE_ARRAY_SIZE = 10;

int AgeArray[] = {};
int AgeArrayOrdered[] = {};

main(){
    int oldestAge;
    for(int i = 0; i < AGE_ARRAY_SIZE; i++){
        int input;
        cin>> input;

        if(input > oldestAge){
            oldestAge = input;
        }

        if(AgeArray[input] >= 1){
            AgeArray[input] += 1;
        } else {
            AgeArray[input] = 1;
        }
    }

    string ageArrayOrdered_s;
    int ageArrayOrderedSize;
    for(int i = 0; i < oldestAge; i++){
        if(ageArray[oldestAge - i] != 0){
            for(int j = 0; j < ageArray[oldestAge - i]; j++){
                AgeArrayOrdered[ageArrayOrderedSize] = ageArray[oldestAge - i];
                ageArrayOrderedSize += 1;
            }
        }
    }
}


#elif EJERCICIO == 3
//////////////////////////////\
*   Calculadora de Promedio   *
//////////////////////////////\
"Calcular el promedio y determinar la situación académica de un grupo de estudiantes.  \
 Supongamos  que eres un profesor y deseas calcular los promedios de tus  estudiantes  \
 para  saber cómo están desempeñándose académicamente. Además, deseas  categorizar  a  \
 los  estudiantes  en diferentes situaciones académicas en función de sus  promedios,  \
 como "Aprobado“ y "Reprobado“, Si nota > 60 = Aprobado, Si nota < 60 = Reprobado."    \


double Averages[] = {};
double Average;

void MainMenu();
void ProgramAdd();
void ProgramAverages();

void ProgramAdd(){
    return 0;
}

void ProgramAverages(){
    return 0;
}

void MainMenu(){
    cout <<"\n\n"
    "[ Menu ]\n"
    "select an option.\n\n"
    "1 - Add\n"
    "2 - Averages\n"
    "3 - Exit Program\n\n"
    "selection: ";

    int selection;
    cin>> selection;

    switch(selection){
        case 1:
        ProgramAdd();
        break;

        case 2:
        ProgramAverages();
        break;

        case 3;
        program::Status = 0;
        break;

        default:
        program::console_clear();
        cout <<"\n\n"
        "Invalid Selection, try again";
        break;
    }
}

main(){
    while(program::Status != 0){
        MainMenu();
    }

    program::exitProgram
}

#endif




