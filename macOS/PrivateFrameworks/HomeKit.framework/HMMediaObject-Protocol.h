//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMAccessorySettings, HMMediaSession;
@protocol HMMediaObjectDelegate;

@protocol HMMediaObject <NSObject>
@property(readonly) HMAccessorySettings *settings;
@property(readonly, copy) HMMediaSession *mediaSession;
@property __weak id <HMMediaObjectDelegate> delegate;
@end

