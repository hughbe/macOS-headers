//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PopoverObjCAdapter : NSObject
{
    struct Popover *_popover;
}

- (void)unregisterForPopoverHidingNotifications;
- (void)registerForPopoverHidingNotifications;
- (void)_hidePopover;
- (void)disconnectPopover:(struct Popover *)arg1;
- (id)initWithPopover:(struct Popover *)arg1;

@end

