//                  //
//  Char Exercises  //
//                  //
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

const int PHRASE_LENGTH = 35;

string word;
char phrase[PHRASE_LENGTH];
int main(){
  // Exercise 1 //
  cout <<"[[ Exercise 1 ]]\n";
  cout <<"Write a word: ";
  cin>> word;
  
  reverse(word.begin(), word.end());
  
  cout <<"reversed = " + word;
  
  // Exercise 2 //
  cout <<"\n\n[[ Exercise 2 ]]\n";
  cout <<"Write a phrase: ";
  cin>> phrase;
  
  int vowelCount = 0;
  for(int  i = 0; i < PHRASE_LENGTH; i++){
    char ch = phrase[i];
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
      vowelCount++;
    }
  }
  
  cout <<endl <<"there are... " <<vowelCount <<" vowels!";
}
