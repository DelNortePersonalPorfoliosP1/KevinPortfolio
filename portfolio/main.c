//
//  main.c
//  portfolio
//
//  Created by Do, Kevin on 9/10/19.
//  Copyright © 2019 Do, Kevin. All rights reserved.
//

#include <stdio.h>
#include "pyth.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    char choice;
   
    printf("Select a lab that you want to run:\n");
    printf("(A):Pythagoras Lives\n");
    printf("(B):Data Types\n");
    printf("(C):\n");
    printf("(D):\n");
    printf("(E):\n");
    printf("(F):\n");
    
    int x = 0;
    
    while(x != 1) {
        scanf("%c", &choice);
        if(choice == 'A' || choice == 'a') {
            x=1;
            printf("You chose Pythagoras Lives.");
            pyth();
        } else if(choice == 'B' || choice == 'b') {
            x=1;
             printf("You chose Data Types.");
            datatypes();
        } else if(choice == 'C' || choice == 'c') {
            x=1;
            printf("You chose .");
            
        } else if(choice == 'D' || choice == 'd') {
            x=1;
            printf("You chose .");
            
        } else if(choice == 'E' || choice == 'e') {
            x=1;
            printf("You chose .");
            
        } else if(choice == 'F' || choice == 'f') {
            x=1;
            printf("You chose .");
            
        } else {
            printf("Invalid Choice\n");
        }
        
                   }
    
    
    return 0;
}