//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <FinderKit/TMarkTornDown-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TScriptableWindowController : NSWindowController <TMarkTornDown>
{
    _Bool tornDown;
}

@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown;
- (void)windowDidEndMove:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)aboutToTearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

