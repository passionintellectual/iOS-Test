//
//  main.c
//  simpleCProgram
//
//  Created by mac on 28/11/15.
//  Copyright © 2015 Xoriant. All rights reserved.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) {
    // insert code here...
//    int days_in_a_week = 23;
//    float cm_to_in = 2.54;
//    
//    char the_w = 'W';
//    printf("%d days in a week. \n", days_in_a_week);
//    printf("%f centimeter to inch. \n", cm_to_in);
//    printf("%c capital W. \n", the_w);
//    
//    float numbers_greeks_love[3];
//    numbers_greeks_love[0]=3.1;
//    numbers_greeks_love[1]=4.1;
//    numbers_greeks_love[2] = 5.1;
//    
//    printf("PI %f \n", numbers_greeks_love[0]);
//        printf("PI %f \n", numbers_greeks_love[1]);
//        printf("PI %f \n", numbers_greeks_love[2]);
//    
//    int primes[] = {12,34,45,67,786,7897};
//    printf("primes are %d, %d, %d, %d,%d,%d\n", primes[0],primes[1],primes[2],primes[3],primes[4],primes[5]);
    
    
//    printf("Hello, World!\n");
//    char *ptr;
//    char a = 's';
//    ptr = &a;
//    printf("a: %c; pointer: %c\n", a, *ptr);
//    char cArr[] = "elridge";
//    ptr = &cArr[2];
//    printf("%c is in %s\n", *ptr, cArr);
//    ++ptr;
//    printf("%c is in %s\n", *ptr, cArr);
//    ++ptr;
//    printf("%c is in %s\n", *ptr, cArr);
    
    typedef struct {
        float center[3];
        float rad;
    } Sphere;
    Sphere makeSPhere (float *c, float r);
    int main() {
//        Sphere s;
//        s.center[0] =12;
//        s.center[1] =34;
//        s.center[2] =156;
//        s.rad = 123;
        float c[] = {23,23,12};
        float rad = 12;
//        printf("centers are %f, %f, %f and radius is %f\n", s.center[0], s.center[1], s.center[2], s.rad);
        return 0;
    }
Sphere makeSPhere (float *c, float r) {
    Sphere sphere;
    sphere.center[0] = c[0];
    sphere.center[1] = c[1];
    sphere.center[2] = c[2];
    sphere.rad = r;
    
    
    return sphere;
}
//}
