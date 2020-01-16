#include "win.h"
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

string win1[] = {"                      O     O        OOO        O     O",
                 "                       O   O       O     O      O     O",
                 "                        OOO        O     O      O     O",
                 "                         O         O     O       O   O ",
                 "                         O           OOO          OOO  "};


string win2[] = {"                      O     O      OOOOOOO      OO    O",
                 "                      O     O         O         O O   O",
                 "                      O  O  O         O         O  O  O",
                 "                      O  O  O         O         O   O O",
                 "                      OOOOOOO      OOOOOOO      O    OO"};


void congrats(){

    system("color a");
    cout << endl;

   for(int i=0; i<5; i++){
        cout << win1[i] << endl;
   }

   cout << endl;

   for(int i=0; i<5; i++){
        cout << win2[i] << endl;
   }

   cout << endl << endl << endl << endl << endl << endl << endl;
}

