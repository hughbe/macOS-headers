//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse
{
    NSArray *_bundleIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (id)initWithBundleIDs:(id)arg1;
- (id)init;

// Remaining properties
@property BOOL success; // @dynamic success;

@end

