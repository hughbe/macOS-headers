//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSScrubberItemLayout-Protocol.h>

@class NSScrubberLayout, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface NSScrubberItemLayoutTween : NSObject <NSScrubberItemLayout>
{
    NSScrubberLayout *_scrubberLayout;
    NSSet *_cachedPrimarySelection;
    CDStruct_99688279 _cachedPrimaryKey;
    NSSet *_cachedSecondarySelection;
    CDStruct_99688279 _cachedSecondaryKey;
    CDStruct_99688279 _cleanState;
}

@property(copy) NSSet *cachedSecondarySelection; // @synthesize cachedSecondarySelection=_cachedSecondarySelection;
@property(copy) NSSet *cachedPrimarySelection; // @synthesize cachedPrimarySelection=_cachedPrimarySelection;
@property CDStruct_99688279 cachedSecondaryKey; // @synthesize cachedSecondaryKey=_cachedSecondaryKey;
@property CDStruct_99688279 cachedPrimaryKey; // @synthesize cachedPrimaryKey=_cachedPrimaryKey;
@property CDStruct_99688279 cleanState; // @synthesize cleanState=_cleanState;
@property(retain) NSScrubberLayout *scrubberLayout; // @synthesize scrubberLayout=_scrubberLayout;
@property(readonly) BOOL wantsTrackingPosition;
- (id)layoutAttributesWithPrimaryAttributes:(id)arg1 secondaryAttributes:(id)arg2 ratioOfSecondary:(double)arg3;
- (void)recacheLayoutAttributesForModelStateIfNeeded:(CDStruct_99688279)arg1 inView:(id)arg2;
- (void)invalidateForStateIfNeeded:(CDStruct_99688279)arg1;
- (id)itemLayoutAttributesForItemAtIndex:(long long)arg1 withState:(CDStruct_99688279)arg2 inView:(id)arg3;
- (id)itemLayoutAttributesForState:(CDStruct_99688279)arg1 inView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

