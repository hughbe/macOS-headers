//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject
{
    CDUnknownBlockType _expirationHandler;
    NSTimer *_assetTimer;
}

+ (id)nextFireDateForDate:(id)arg1;
- (void).cxx_destruct;
- (void)updateAssetTimer;
- (void)assetTimerFired;
- (void)invalidate;
- (void)dealloc;
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1;

@end

