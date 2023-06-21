//          //
//  Matrix  //
//          //

// incomplete
#include<conio.h>
#include<iostream>
#include<map>
#include<windows.h>
using namespace std;

const int MATRIX_I = 10;
const int MATRIX_J = 10;

char choise;

template <T, V>
class Matrix{
  private:
    T MatrixT;
    map<T, map<T, V>> MatrixV;

    type_info TtypeId = typeid(T);
    type_info VtypeId = typeid(V);

    auto keydef(T key; int i = sizeof(MatrixT[]); int j = sizeof(MatrixT)){
      if(typeid(T) != typeid(int)){
        return false;
      }

      return MatrixT;
    }
  
  protected:
    void printFrame(T i = NULL, T j = NULL){
      
    }

  public:
    Matrix(int i = 0, int j = 0){
      if typeid(T) ==  && typeid()){
        for(int i = 0; i < i; i++){
          MatrixT[0][i] = i;
          Matrix[i][0] = i;
        }
      }
    }

    void list(int i = NULL, int j = NULL){
      for(int i = i || 0; i < i || MATRIX_I; i++){
        printFrame(i);
        
        for(int j = j || 0; j < j || MATRIX_J; j++){
          printFrame(j);
        }
      }
    }

    void insert(V value, T i, T j){
      MatrixV.at(i).at(j) = value;
    }

    void remove(T i, T j){
      MatrixV.at(i).at(j) = NULL;
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
