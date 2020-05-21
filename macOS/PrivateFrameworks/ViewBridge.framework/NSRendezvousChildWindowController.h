//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSSemiAutonomousRendezvousWindowController.h>

__attribute__((visibility("hidden")))
@interface NSRendezvousChildWindowController : NSSemiAutonomousRendezvousWindowController
{
    unsigned int _childControllerInvalid:1;
    int _privateEventLoopKind;
}

+ (Class)comboBoxWindowClass;
+ (Class)correctionPanelClass;
@property(readonly) int privateEventLoopKind; // @synthesize privateEventLoopKind=_privateEventLoopKind;
- (id)initWithWindow:(id)arg1;
- (void)_endPrivateEventLoop;
- (void)invalidateWithError:(id)arg1;
- (void)invalidate;

@end

