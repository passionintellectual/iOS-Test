//
//  Rectangle.m
//  objectiveCInheritance
//
//  Created by mac on 28/11/15.
//  Copyright © 2015 Xoriant. All rights reserved.
//

#import "Rectangle.h"

@implementation Rectangle
-(void)setWidth:(float)width
{
    _width = width;
}
-(float)area{
    
    return self.height * _width;
}
-(float)width{
    return _width;
}
@end
