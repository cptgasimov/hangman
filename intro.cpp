#include <iostream>
#include <string>
#include "intro.h"

using namespace std;

string message[] = {"################################################################################",
                    "#                                                                              #",
                    "#  X       X    XXXXX   X         XXXXXX     XXXXXX      XXXXXXXXX      XXXXX  #",
                    "#  X       X    X       X         X          X    X      X   X   X      X      #",
                    "#  X   X   X    XXX     X         X          X    X      X   X   X      XXX    #",
                    "#  X   X   X    X       X         X          X    X      X       X      X      #",
                    "#  XXXXXXXXX    XXXXX   XXXXXX    XXXXXX     XXXXXX      X       X      XXXXX  #",
                    "#                                                                              #",
                    "################################################################################"
                    };

void greeting(){

    for(int i=0; i<9; i++){
        cout << message[i];
    }
}
