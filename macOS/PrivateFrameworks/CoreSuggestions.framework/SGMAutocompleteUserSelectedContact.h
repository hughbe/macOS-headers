//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMAutocompleteUserSelectedContact : NSObject
{
    PETScalarEventTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 wasSuggestedContact:(struct SGMTypeSafeBool_)arg2 wasKnownContact:(struct SGMTypeSafeBool_)arg3 app:(struct SGMContactDetailUsedApp_)arg4;
- (id)init;

@end

