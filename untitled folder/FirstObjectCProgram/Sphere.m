//
//  Sphere.m
//  FirstObjectCProgram
//
//  Created by mac on 28/11/15.
//  Copyright © 2015 Xoriant. All rights reserved.
//

#import "Sphere.h"

@implementation Sphere

-(void)setRadius:(float)rad{
    radius = rad;
}

-(float)radius{
    return radius;
}

-(void)setCenter:(NSArray *)center{
    _center = center;
}
-(NSArray *)center{
    return _center;
}

@end
