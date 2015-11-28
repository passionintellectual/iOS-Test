//
//  main.m
//  objectiveCInheritance
//
//  Created by mac on 28/11/15.
//  Copyright © 2015 Xoriant. All rights reserved.
//
#import "Shape.h"
#import "Circle.h"
#import "Rectangle.h"

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
    
        Circle *round = [[Circle alloc] init];
        round.radius = 25;
        NSLog(@"area of circle %f",[round area]);
        
        Rectangle *rect = [[Rectangle alloc] init];
        [rect setWidth:10];
        rect.height = 100;
        NSLog(@"area of rectangle %f",[rect area]);
        
        
    }
    return 0;
}
