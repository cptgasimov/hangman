#include <iostream>
#include <cstdlib>
#include "draw.h"
#include "initial.h"
#include "game_over.h"
#include "intro.h"
#include "win.h"
#include <conio.h>

using namespace std;

int main()
{
    system("color 9");

    greeting();

    cout << "\n\n\n\n\n\n\n\t\t\t   Press any key to start . . ." << endl;

    if(getch()){

    system("cls");

    setQuestion();

    draw();

    showQuestion();

    system("pause");

    }

    return 0;
}
