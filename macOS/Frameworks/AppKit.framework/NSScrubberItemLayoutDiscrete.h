//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSScrubberItemLayout-Protocol.h>

@class NSScrubberLayout, NSString;

__attribute__((visibility("hidden")))
@interface NSScrubberItemLayoutDiscrete : NSObject <NSScrubberItemLayout>
{
    NSScrubberLayout *_scrubberLayout;
    CDStruct_99688279 _cleanState;
}

@property CDStruct_99688279 cleanState; // @synthesize cleanState=_cleanState;
@property(retain) NSScrubberLayout *scrubberLayout; // @synthesize scrubberLayout=_scrubberLayout;
@property(readonly) BOOL wantsTrackingPosition;
- (void)invalidateForStateIfNeeded:(CDStruct_99688279)arg1;
- (id)itemLayoutAttributesForItemAtIndex:(long long)arg1 withState:(CDStruct_99688279)arg2 inView:(id)arg3;
- (id)itemLayoutAttributesForState:(CDStruct_99688279)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

