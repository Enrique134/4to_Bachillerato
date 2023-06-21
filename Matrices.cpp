//          //
//  Matrix  //
//          //
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

const int MATRIX_I = 10;
const int MATRIX_J = 10;

char choise;

void printFrame(int i = NULL, int j = NULL){
  if(!i || !j){
    
  }
}

class Matrix{
  int Matrix[MATRIX_I][MATRIX_J];
  
  void list(int iv = NULL, int jv = NULL){
    for(int i = iv || 0; i < iv || MATRIX_I; i++){
      printFrame(i);
      
      for(int j = jv || 0; j < jv || MATRIX_J; j++){
       printFrame(j);
      }
    }
  }
}

void cls(){
  system("cls");
}

int menu(){
  cout <<"[[ Menu ]]\n"
    <<"Select an option by key.\n"
    <<"- 0 = List\n"
    <<"- 1 = Add/Remove Value\n"
    <<"- 2 = Exit Program\n"
    <<"\n*press key*";
  
  choise = getch();
  cls();
  
  return choise;
}

void title(){
  cout <<"-- MATRIX --\n\n";
}

void stitle(string title){
  cout <<"[ " + s + " ]\n\n";
}

void say(string text){
  cout <<text;
}

int main(){
  while(true){
    title();
    
    switch(menu()){
      case 0:
        stitle("List");
        Matrix.list();
        
      case 1:
        stitle("Add/Remove Value");
        
        int i, j;
        cout <<"\ni: "; cin>> i;
        cout <<"\nj: "; cin>> j;
        
        Matrix.list(i, j);
      case 2:
        title();
        cout <<"Really want to exit C:? Y/N";
        
        choise = getch();
        cls();
        
        switch(choise){
          case 'N':
            title();
            cout <<"It's okay";
            break;
            
          case 'Y':
            title();
            cout <<"By#! zzZ...";
            exit(0);
            break;
            
          default:
            title();
            cout <<"I understand";
            break;
        }
        
      default:
        break;
    }
    
    cls();
  }
  
  return 0;
}
