//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject
{
    _Bool mByPosition;
    _Bool mRelative;
    _Bool mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;
- (id)description;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setFieldId:(unsigned long long)arg1;
- (unsigned long long)fieldId;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (void)setRelative:(_Bool)arg1;
- (_Bool)relative;
- (void)setByPosition:(_Bool)arg1;
- (_Bool)byPosition;
- (id)init;

@end

