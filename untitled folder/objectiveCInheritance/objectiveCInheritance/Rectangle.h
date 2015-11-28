//
//  Rectangle.h
//  objectiveCInheritance
//
//  Created by mac on 28/11/15.
//  Copyright © 2015 Xoriant. All rights reserved.
//

#import "Shape.h"

@interface Rectangle : Shape
{
    float _width;
    
}
@property(nonatomic) float height;
-(void)setWidth:(float)width;
-(float)width;

@end
