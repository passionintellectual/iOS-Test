//
//  Sphere.h
//  FirstObjectCProgram
//
//  Created by mac on 28/11/15.
//  Copyright © 2015 Xoriant. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sphere : NSObject{

        NSArray *_center;
        float radius;
}

-(void)setRadius:(float)radius;
-(float)radius;

-(void)setCenter:(NSArray *)center;
-(NSArray *)center;

@end
