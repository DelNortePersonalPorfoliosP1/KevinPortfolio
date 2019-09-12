//
//  pythagoraslives.c
//  portfolio
//
//  Created by Do, Kevin on 9/10/19.
//  Copyright © 2019 Do, Kevin. All rights reserved.
//

#include "pyth.h"
#include <math.h>

int pyth(void) {

    double leg1;
    double leg2;
    printf("Enter the length of leg 1: ");
    scanf("%lf", &leg1);
    printf("Enter the length of leg 2: ");
    scanf("%lf", &leg2);

    double leg1sq = leg1 * leg1;
    double leg2sq = leg2 * leg2;
    double hypotenusesq = leg1sq + leg2sq;
    double hypotenuse = sqrt(hypotenusesq);
    
    printf("The length of the hypotenuse is %lf. \n", hypotenuse);
    
    
    return 0;
}
