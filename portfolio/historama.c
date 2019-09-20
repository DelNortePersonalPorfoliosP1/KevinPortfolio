//
//  historama.c
//  portfolio
//
//  Created by Do, Kevin on 9/20/19.
//  Copyright © 2019 Do, Kevin. All rights reserved.
//

#include "historama.h"
int historama(void) {
    
    int response1;
    int response2;
    int response3;
    int response4;
    int response5;
    int response6;
    int response7;
    int response8;
    int response9;
    int response10;
    printf("Type in 10 numbers, one on each line (numbers 1-20):\n");
    scanf("%i", &response1);
    scanf("%i", &response2);
    scanf("%i", &response3);
    scanf("%i", &response4);
    scanf("%i", &response5);
    scanf("%i", &response6);
    scanf("%i", &response7);
    scanf("%i", &response8);
    scanf("%i", &response9);
    scanf("%i", &response10);
    
    
    int sum = (response1+response2+response3+response4+response5+response6+response7+response8+response9+response10);
    double average = sum/10.00;
    
 
    double remainder = (sum%10)/10;
    int roundedaverage;
    
    if(remainder >= 0.5) {
        roundedaverage = average - remainder + 1;
    } else {
        roundedaverage = average - remainder;
    }
        
    
    printf("%i : ", response1);
    while(response1 > 0) {
        printf("*");
        response1--;
    }
    printf("\n");
    
    
    printf("%i : ", response2);
    while (response2 > 0) {
        printf("*");
        response2--;
    }
    printf("\n");
    
    
    printf("%i : ", response3);
    while (response3 > 0) {
        printf("*");
        response3--;
    }
    printf("\n");
    
    
    printf("%i : ", response4);
    while (response4 > 0) {
        printf("*");
        response4--;
    }
    printf("\n");
    
    
    printf("%i : ", response5);
    while (response5 > 0) {
        printf("*");
        response5--;
    }
    printf("\n");
    
    
    printf("%i : ", response6);
    while (response6 > 0) {
        printf("*");
        response6--;
    }
    printf("\n");
    
    
    printf("%i : ", response7);
    while (response7 > 0) {
        printf("*");
        response7--;
    }
    printf("\n");
    
    
    printf("%i : ", response8);
    while (response8 > 0) {
        printf("*");
        response8--;
    }
    printf("\n");
    
    
    printf("%i : ", response9);
    while (response9 > 0) {
        printf("*");
        response9--;
    }
    printf("\n");
    
    
    printf("%i : ", response10);
    while (response10 > 0) {
        printf("*");
        response10--;
    }
    printf("\n");

    printf("Average:  %lf", average);
    printf("%lf : ", average);
    while (roundedaverage > 0) {
        printf("*");
        roundedaverage--;
    }
    printf("\n");
    
    
    return 0;
}
