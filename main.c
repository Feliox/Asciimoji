//
//  main.c
//  asciimoji
//
//  Created by Richard Stefun on 11/22/18.
//  Copyright © 2018 Richard Stefun. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char borders [2][6] ={
    { '(', '|','{','[','<','/'}, //first border
    { ')', '|','}',']','>','\\'} //second border
};
char eyes [8] =
    { '0', '#','^','*','O','$','~','x'}; //eyes character

char nose [7] =
{ '.', ',','_','o','-','=',' '}; //nose or mouth character


int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    
    //random border
    int b = rand()%6;
    //random eyes
    int e = rand()%8;
    //random nose
    int n = rand()%7;
    
    printf("Your asciimoji: %c%c%c%c%c\n", borders[0][b], eyes[e], nose[n], eyes[e], borders[1][b]);
    return 0;
}
