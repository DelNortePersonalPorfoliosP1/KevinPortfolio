//
//  tempcalc.c
//  portfolio
//
//  Created by Do, Kevin on 9/13/19.
//  Copyright © 2019 Do, Kevin. All rights reserved.
//

#include "tempcalc.h"
int tempcalc(void) {
    
    double temp;
    
    printf("Enter a temperature in Fahrenheit: \n");
    scanf("%lf", &temp);
    
    double celsius;
    
    celsius = (5/9)*(temp-32);
    
    printf("Your entered temperature in Celsius is:  %lf", celsius);
    
    
    
    
    return 0;
}
