//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNSettings, MNSettingsManager;

@protocol MNSettingsObserver <NSObject>
- (void)settingsManager:(MNSettingsManager *)arg1 didUpdateSettings:(MNSettings *)arg2 previousSettings:(MNSettings *)arg3;
@end

