//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKReachability.h>

@class NSError, NSString;

@interface GKHostReachability : GKReachability
{
    NSString *_hostName;
    NSError *_error;
}

+ (id)_gkReachabilityWithHostName:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void)dealloc;

@end

