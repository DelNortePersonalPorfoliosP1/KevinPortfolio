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
    
    double days;
    double minutes;
    double hours;
    double seconds;
    
    /*
    days = (inputseconds/86400);
    
    hours = (inputseconds -(86400*days))/24;
    
    minutes = (inputseconds -(86400*days)-(hours*24));
    
    seconds = (inputseconds -(86400*days)-(hours*24)-(minutes*60));
    */
    
    if(inputseconds>=86400) {
        days = inputseconds/86400 -((inputseconds%86400)/86400);
    } else {
        days = 0;
    }
    
    if((inputseconds%86400)>=3600) {
        hours = (inputseconds%86400)/3600 - (((inputseconds%86400)%3600)/3600);
    } else {
        hours = 0;
    }
    
    if(((inputseconds%86400)%3600)>=60) {
        minutes = ((inputseconds%86400)%3600)/60 - ((((inputseconds%86400)%3600)%60)/60);
    } else {
        minutes = 0;
    }
    seconds = (((inputseconds%86400)%3600)%60)/60;
    
    printf("Days:       %lf \n", days);
    printf("Hours:      %lf \n", hours);
    printf("Minutes:    %lf \n", minutes);
    printf("Seconds:    %lf \n", seconds);
    
    return 0;
}
