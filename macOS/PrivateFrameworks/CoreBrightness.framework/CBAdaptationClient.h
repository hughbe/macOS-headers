//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BrightnessSystemClient;

@interface CBAdaptationClient : NSObject
{
    BrightnessSystemClient *bsc;
    BOOL ownsClient;
    int _mode;
    BOOL _modeSet;
    BOOL _supported;
}

+ (BOOL)supportsAdaptation;
@property BOOL supported; // @synthesize supported=_supported;
- (BOOL)getStrengths:(float *)arg1 nStrengths:(int)arg2;
- (BOOL)overrideStrengths:(float *)arg1 forModes:(int *)arg2 nModes:(int)arg3;
- (BOOL)setAdaptationMode:(int)arg1 withPeriod:(float)arg2;
- (BOOL)animateFromWeakestAdaptationModeInArray:(int *)arg1 withLength:(int)arg2 toWeakestInArray:(int *)arg3 withLength:(int)arg4 withProgress:(float)arg5 andPeriod:(float)arg6;
- (BOOL)setWeakestAdaptationModeFromArray:(int *)arg1 withLength:(int)arg2 andPeriod:(float)arg3;
- (int)getAdaptationMode;
- (BOOL)getEnabled;
- (BOOL)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithClientObj:(id)arg1;

@end

