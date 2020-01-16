#include <iostream>
#include <cstdlib>
#include "draw.h"
#include <string>

using namespace std;

string pic[19] = { "   ********",
                "\n   *", "\t  |",
                "\n   *", "\t  |",
                "\n   *", "\t  O",
                "\n   *", "\t /", "|", "\\",
                "\n   *", "\t /", " \\",
                "\n   *", "\n   *", "\n   *", "\n   *", "\n*******"};

int numbers[] = {2, 4, 6, 8, 9, 10, 12, 13};
int position = 0;
bool isMatch = false, isFinished = false;

void draw(){

    for(int i=0; i<19; i++){

        for(int j=0; j<8; j++){
            if(i==numbers[j]){
                isMatch = true;
                break;
            }
        }

        for(int k=0; k<8; k++){
            if(numbers[k] != 20){
              isFinished = false;
                break;
            } else {
              isFinished = true;
            }
        }

        if(!isMatch){
            cout << pic[i];
        }

        isMatch = false;
    }

    cout << endl;
}

void incorrectAnswer(){
    numbers[position] = 20;
    position++;
}

bool isEnd(){
        if(isFinished){
            system("color c");
            return true;
        }
        return false;
}
