//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface PPMNamedEntityItemDonation : NSObject
{
    PETScalarEventTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct PPMNamedEntityDonationSource_)arg2 is_new:(struct PPMBoolOption_)arg3;
- (id)init;

@end

