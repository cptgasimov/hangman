#include "initial.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "draw.h"
#include <cctype>
#include "game_over.h"
#include "win.h"

using namespace std;

string countries[] = {"AZERBAIJAN", "TURKEY", "RUSSIA", "USA", "ANGOLA", "DENMARK", "NIGERIA", "MALAYSIA", "LATVIA",
                      "EGYPT", "BRAZIL", "ISRAEL", "ITALY", "FRANCE", "GERMANY", "SPAIN", "GREECE", "ARGENTINA",
                      "NETHERLANDS", "CANADA", "SYRIA", "KAZAKHSTAN", "TURKMENISTAN", "AFGHANISTAN", "IRAN", "IRAQ",
                      "ROMANIA", "GEORGIA", "MONGOLIA", "AUSTRIA", "AUSTRALIA", "CHINA", "JAPAN", "KOREA", "BELGIUM"};

string chosenCountry;
int index, times = 0;
string letter;
char foundLetters[] = {};
bool theLast = false;

void setQuestion(){
    srand(time(0));
    index = rand()%35;
    chosenCountry = countries[index];
}

void showQuestion(){

    cout << endl;

    for(int i=0; i<chosenCountry.length(); i++){

    if(chosenCountry.find(letter[0],0) != -1){

        if(letter[0]==chosenCountry[i]){

            if(letter[0] != foundLetters[i]){
              foundLetters[i] = letter[0];
            } else {
              cout << "You already entered this letter\n\n";
              break;
            }
       }
    } else {
        if(times != 0){

            if(isalpha(letter[0])){
                if(letter.length()==1){
                system("cls");
                incorrectAnswer();
                draw();
                cout << "\nIncorrect" << endl << endl;

                if(isEnd()){
                   system("cls");
                   theEnd();
                   theLast = true;
                }

                break;
                }
            }
        }
    }
 }

        if(foundLetters==chosenCountry){
            theLast = true;
            system("cls");
            congrats();
        }


if(!theLast){

        for(int j=0; j<chosenCountry.length(); j++){

            if(foundLetters[j]==chosenCountry[j]){
                cout << foundLetters[j] << " ";
            } else if(chosenCountry[j]==' '){
            cout << " ";
           } else {
            cout << "? ";
           }
        }

        cout << "\n\nGuess a letter: \n\n=>";
        cin >> letter;

        if(letter.length()==1){
           letter[0] = toupper(letter[0]);

           if(!isalpha(letter[0])){
            system("cls");
            incorrectAnswer();
            draw();
            if(!isEnd()){
                cout << "\nPlease, enter a valid letter" << endl;
                showQuestion();
            } else {
                system("cls");
                theEnd();
            }

           } else {

                if(times==0){
                    times++;
                }

                system("cls");
                draw();
                if(!isEnd()){
                    showQuestion();
                } else {
                    system("cls");
                    theEnd();
                }

           }

        } else {
           system("cls");
           incorrectAnswer();
           draw();
           if(!isEnd()){
                cout << "\nPlease, enter only one letter per time" << endl;
                showQuestion();
           } else {
                system("cls");
                theEnd();
           }
        }
  }

}
