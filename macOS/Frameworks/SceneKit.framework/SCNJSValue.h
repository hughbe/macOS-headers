//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface SCNJSValue : NSValue
{
}

+ (id)SCNJSExportProtocol;
+ (id)valueWithMatrix4:(struct CATransform3D)arg1;
+ (id)valueWithVector4:(struct SCNVector4)arg1;
+ (id)valueWithVector3:(struct SCNVector3)arg1;
- (struct CATransform3D)matrix4;
- (struct SCNVector4)vector4;
- (struct SCNVector3)vector3;

@end

