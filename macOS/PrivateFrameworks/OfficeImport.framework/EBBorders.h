//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBBorders : NSObject
{
}

+ (id)edBordersFromXlDXf:(struct XlDXf *)arg1 edResources:(id)arg2;
+ (id)edBordersFromXlXf:(struct XlXf *)arg1 edResources:(id)arg2;
+ (int)convertEDDiagonalEnumToXl:(int)arg1;
+ (int)convertEDBorderEnumToXl:(int)arg1;
+ (int)convertXlDiagStyleEnumToED:(int)arg1;
+ (int)convertXlBorderEnumToED:(int)arg1;

@end

