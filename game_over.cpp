#include <iostream>
#include <cstdlib>
#include "game_over.h"
#include <string>

using namespace std;

string game_over_p1[] = {"                  OOOOOO        O        O       O     OOOOO",
                         "                  O            O O       O O   O O     O    ",
                         "                  O  OOO      O   O      O  O O  O     OOO  ",
                         "                  O    O     O O O O     O   O   O     O    ",
                         "                  OOOOOO    O       O    O       O     OOOOO"};


string game_over_p2[] = {"                    OOO     O       O      OOOOO       OOOOO",
                         "                  O     O    O     O       O           O   O",
                         "                  O     O     O   O        OOO         OOOOO",
                         "                  O     O      O O         O           O  O ",
                         "                    OOO         O          OOOOO       O   O"};

void theEnd(){

    cout << endl;
    for(int i=0; i<5; i++){
        cout << game_over_p1[i] << endl;
    }

    cout << endl;

    for(int i=0; i<5; i++){
        cout << game_over_p2[i] << endl;
    }

    cout << endl << endl << endl << endl << endl << endl << endl;
}
