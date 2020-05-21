//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MPDisplayModeBucket : NSObject
{
    float _minHeight;
    float _maxHeight;
    float _targetHeight;
    BOOL _usePreciseRate;
    NSMutableArray *_modes;
}

- (id)bestModeForNativeHeight:(float)arg1;
- (id)bestMode;
- (id)lowMode;
- (id)highMode;
- (BOOL)addModeToBucket:(id)arg1;
- (BOOL)modeFitsBucket:(id)arg1;
- (void)dealloc;
- (id)initWithMinHeight:(float)arg1 maxHeight:(float)arg2 targetHeight:(float)arg3 usingPreciseRate:(BOOL)arg4;

@end

