//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTableFilter : NSObject
{
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;
- (id)description;
- (void)setOperatorType:(int)arg1;
- (int)operatorType;
- (void)setScale:(int)arg1;
- (int)scale;
- (void)setFilterValue:(double)arg1;
- (double)filterValue;
- (void)setValue:(double)arg1;
- (double)value;

@end

