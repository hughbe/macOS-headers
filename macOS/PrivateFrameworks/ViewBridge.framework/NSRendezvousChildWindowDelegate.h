//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSSemiAutonomousRendezvousWindowDelegate.h>

__attribute__((visibility("hidden")))
@interface NSRendezvousChildWindowDelegate : NSSemiAutonomousRendezvousWindowDelegate
{
    struct CGPoint _mostRecentlyKnownOrigin;
}

- (BOOL)_window:(id)arg1 shouldCloseForClosingParentPopoverWindowWithTransientContext:(BOOL)arg2;
- (id)initWithWindow:(id)arg1 andParent:(id)arg2;
- (void)windowDidMove:(id)arg1;
- (struct CGPoint)originRelevantToParent:(id)arg1;

@end

