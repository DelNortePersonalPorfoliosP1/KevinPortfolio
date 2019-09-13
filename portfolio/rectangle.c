//
//  rectangle.c
//  portfolio
//
//  Created by Do, Kevin on 9/13/19.
//  Copyright © 2019 Do, Kevin. All rights reserved.
//

#include "rectangle.h"


int rectangle(void) {
    
    double length;
    double width;
    
    printf("Type in the length of the rectangle:\n");
    scanf("%lf", &length);
    printf("Type in the width of the rectangle:\n");
    scanf("%lf", &width);
    
    printf("The area of the rectangle is: %lf \n", length*width);
    printf("The perimeter of the rectangle is: %lf \n", length*2 + width*2);
    
    return 0;
}
