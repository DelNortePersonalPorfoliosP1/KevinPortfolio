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
    double days;
    double minutes;
    double hours;
    double seconds;
    printf("Enter an amount of seconds: \n");
    scanf("%d", &inputseconds);
    
    if (inputseconds==1) {
        printf("In 1 second, there is 1 second. Why are you even asking that?\n");
    }else if(inputseconds==0) {
        printf("In 0 seconds, there are 0 seconds. Duh.");
    }else if(inputseconds<0) {
        printf("Why are you using negative numbers?");
    } else {
        printf("In %d seconds, there are:\n", inputseconds);
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
        seconds = (((inputseconds%86400)%3600)%60);
        
        printf("Days:       %lf \n", days);
        printf("Hours:      %lf \n", hours);
        printf("Minutes:    %lf \n", minutes);
        printf("Seconds:    %lf \n", seconds);
    }
    
    /*
    days = (inputseconds/86400);
    
    hours = (inputseconds -(86400*days))/24;
    
    minutes = (inputseconds -(86400*days)-(hours*24));
    
    seconds = (inputseconds -(86400*days)-(hours*24)-(minutes*60));
    */
    
    return 0;
}
