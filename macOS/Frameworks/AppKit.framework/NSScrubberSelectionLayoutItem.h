//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSScrubberSelectionLayout-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSScrubberSelectionLayoutItem : NSObject <NSScrubberSelectionLayout>
{
    long long _itemAlignment;
    BOOL _floating;
}

@property BOOL floatingSelection; // @synthesize floatingSelection=_floating;
@property long long itemAlignment; // @synthesize itemAlignment=_itemAlignment;
- (id)selectionLayoutAttributesForItemAtIndex:(long long)arg1 withState:(CDStruct_99688279)arg2 inLayout:(id)arg3 presentationItemAttributes:(id)arg4 inView:(id)arg5;
- (id)selectionLayoutAttributesForState:(CDStruct_99688279)arg1 inLayout:(id)arg2 presentationItemAttributes:(id)arg3 inView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

