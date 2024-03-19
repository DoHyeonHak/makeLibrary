#include <stdio.h>
#include "menu.h"
#include "guest.h"

// gcc -o shop main.c menu.o guest.o

int main()
{
    displayMenu();
    displayGuest();
    return 0;
}

// build tool?
// make utility!
// space 말고 tap으로 해야됨 이게 문법