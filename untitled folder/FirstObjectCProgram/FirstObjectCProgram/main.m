//
//  main.m
//  FirstObjectCProgram
//
//  Created by mac on 28/11/15.
//  Copyright © 2015 Xoriant. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sphere.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        
        Sphere *ball = [[Sphere alloc] init];
        
        [ball setRadius:25];
        
        NSLog(@"Ball Radius %f", [ball radius]);
        
        NSLog(@"Hello, World!");
    }
    return 0;
}
