//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSStatusItem.h>

__attribute__((visibility("hidden")))
@interface NSExitFullScreenStatusItem : NSStatusItem
{
    unsigned long long spaceID;
}

- (unsigned long long)_confiningSpaceID;
- (BOOL)_isExitFullScreen;
- (id)_defaultsKeyForAutosaveProperty:(id)arg1;
- (id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 visible:(BOOL)arg4 spaceID:(unsigned long long)arg5;

@end

