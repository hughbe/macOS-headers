//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRApplication.h>

__attribute__((visibility("hidden")))
@interface SCRSystemApplication : SCRApplication
{
}

- (void)_announceWindowExists;
- (void)announceWindowExists;
- (void)elementWasDestroyed:(id)arg1;
- (id)fullNameDescription;
- (id)initWithPSN:(struct ProcessSerialNumber)arg1 pid:(int)arg2 name:(id)arg3 bundleIdentifier:(id)arg4 bundleVersion:(id)arg5 url:(id)arg6;
- (BOOL)isSystemApplication;

@end

