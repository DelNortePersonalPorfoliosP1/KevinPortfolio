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
    double kelvin;
    
    
    celsius = (5/9)*(temp-32);
    kelvin = celsius + 273;
    
    if(temp<-459.67) {
        printf("The temperature can't go that low.");
    } else {
    printf("Your entered temperature in Celsius is:  %lf \n", celsius);
    printf("Your entered temperature in Kelvin is: %lf \n", kelvin);
    }
    
    return 0;
}
