#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char word[30], letter[1], secret[30];
    int siz, i, chance, hit;
    bool hits = false;

    chance = 6;
    siz = 0;
    i = 0;
    hits = false;
    hit = 0;

    cout <<"------ Game instructions: ------ \n\n"
    "Ask someone to type a word without you knowing and not seeing what it is,\n"
    "you have 6 chances to type and guess the secret word,\n"
    "if within these chances you guess,\n"
    "you win, if not, you lose!";

    cout << "\n\n\n*------*------*-- Lets go ----*------*------*\n ";

    cout << "\nSecret word: ";
    cin >> word;
    system("cls");

    while(word[i] != '\0'){
        i++;
        siz++;
    }

    for(i=0; i<30; i++){
        secret[i]= '-';

    }

    while((chance >0)&&(hit < siz)){
          cout <<"Remaining chances: " << chance << "\n\n";
          cout <<"Secret word: ";
          for(i=0; i<siz; i++){
            cout << secret[i];
          }
        cout <<"\n\nEnter a letter: ";
        cin >>letter[0];
        for(i=0; i<siz; i++){
            if((word[i]==letter[0]) && (secret[i] != letter[0])){
              hits = true;
              secret[i] = word[i];
              hit++;
            }
        }
        if(!hits){
            chance--;
        }
        hits = false;
        system("cls");
    }
    if(hit == siz){
        cout <<"You win!!! ^^ \n\n";
    }
    else{
        cout <<"You lose!! '-'\n\n";
    }
    cout <<" ---- Thank you ----\n\n";

    return 0;
}
