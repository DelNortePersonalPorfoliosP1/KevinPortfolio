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
#include "tempcalc.c"

int main(int argc, const char * argv[]) {
    // insert code here...
    char choice;
   
    printf("Select a lab that you want to run:\n");
    printf("(A):Pythagoras Lives\n");
    printf("(B):Data Types\n");
    printf("(C):Seconds Calculator\n");
    printf("(D):Rectangle: Area and Perimeter Calculator\n");
    printf("(E):Temperature Calculator\n");
    printf("(F):\n");
    
    int x = 0;
    
    while(x != 1) {
        scanf("%c", &choice);
        if(choice == 'A' || choice == 'a') {
            x=1;
            printf("You chose Pythagoras Lives. \n");
            pyth();
        } else if(choice == 'B' || choice == 'b') {
            x=1;
             printf("You chose Data Types. \n");
            datatypes();
        } else if(choice == 'C' || choice == 'c') {
            x=1;
            printf("You chose Seconds Calculator. \n");
            seccalc();
        } else if(choice == 'D' || choice == 'd') {
            x=1;
            printf("You chose Rectangle: Area and Perimeter Calculator. \n");
            rectangle();
        } else if(choice == 'E' || choice == 'e') {
            x=1;
            printf("You chose Temperature Calculator. \n");
            tempcalc();
        } else if(choice == 'F' || choice == 'f') {
            x=1;
            printf("You chose . \n");
            
        } else {
            printf("Invalid Choice\n");
        }
        
                   }
    
    
    return 0;
}
