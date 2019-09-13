//
//  seccalc.c
//  portfolio
//
//  Created by Do, Kevin on 9/12/19.
//  Copyright © 2019 Do, Kevin. All rights reserved.
//

#include "seccalc.h"

int seccalc(void) {
    
    int inputseconds;
    printf("Enter an amount of seconds: \n");
    scanf("%d", &inputseconds);
    
    printf("In %d seconds, there are:\n", inputseconds);
    
    hours = (inputseconds/3600);
    
    minutes = (inputseconds -(3600*hours))/60;
    
    seconds = (inputseconds -(3600*hours)-(minutes*60));
    
    
    printf("Days:       %lf \n", day);
    //printf("Hours:      %lf \n", hour);
    //printf("Minutes:    %lf \n", );
    //printf("Hours:      %lf \n", );
    
    return 0;
}
