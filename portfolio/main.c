//
//  main.c
//  portfolio
//
//  Created by Do, Kevin on 9/10/19.
//  Copyright © 2019 Do, Kevin. All rights reserved.
//

#include <stdio.h>
#include "pyth.h"
#include "datatypes.h"
#include "seccalc.h"
#include "rectangle.h"
#include <time.h>
#include "tempcalc.h"

int main(int argc, const char * argv[]) {

    
    char choice;
    printf("          _____________________________________\n");
    printf("         | Select a lab that you want to run:  |\n");
    printf("         /-------------------------------------\\\n");
    printf("         |  (A):Pythagoras Lives               |\n");
    printf("         |  (B):Data Types                     |\n");
    printf("         |  (C):Seconds Calculator             |\n");
    printf("         |  (D):Rectangle Calculator           |\n");
    printf("         |  (E):Temperature Calculator         |\n");
    printf("         \\-------------------------------------/\n");
    printf("                            ");
    
    int x = 0;
    
    while(x != 1) {
        scanf("%s", &choice);
        if(choice == 'A' || choice == 'a') {
            x=1;
            printf("\nYou chose Pythagoras Lives. \n");
            pyth();
        } else if(choice == 'B' || choice == 'b') {
            x=1;
             printf("\nYou chose Data Types. \n");
            datatypes();
        } else if(choice == 'C' || choice == 'c') {
            x=1;
            printf("\nYou chose Seconds Calculator. \n");
            seccalc();
        } else if(choice == 'D' || choice == 'd') {
            x=1;
            printf("\nYou chose Rectangle Calculator. \n");
            rectangle();
        } else if(choice == 'E' || choice == 'e') {
            x=1;
            printf("\nYou chose Temperature Calculator. \n");
            tempcalc();
        } else {
            printf("\n                   _________________\n");
            printf("                  /                 \\");
            printf("\n                 |  INVALID CHOICE   |");
            printf("\n                 |   SELECT AGAIN    |\n");
            printf("                  \\_________________/\n");
            printf("                           ");
        }
        
                   }
    
    
    return 0;
}

