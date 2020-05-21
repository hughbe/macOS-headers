//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TVRCSessionData : NSObject
{
    BOOL _usedRTI;
    BOOL _usedSiri;
    BOOL _requiredPairing;
    BOOL _directionalControlsEnabled;
    NSDate *_sessionStartTime;
    NSString *_launchContextDesc;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *launchContextDesc; // @synthesize launchContextDesc=_launchContextDesc;
@property(nonatomic) BOOL directionalControlsEnabled; // @synthesize directionalControlsEnabled=_directionalControlsEnabled;
@property(nonatomic) BOOL requiredPairing; // @synthesize requiredPairing=_requiredPairing;
@property(nonatomic) BOOL usedSiri; // @synthesize usedSiri=_usedSiri;
@property(nonatomic) BOOL usedRTI; // @synthesize usedRTI=_usedRTI;
@property(retain, nonatomic) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;

@end

