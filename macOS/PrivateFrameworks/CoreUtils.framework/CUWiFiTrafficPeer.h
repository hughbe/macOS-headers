//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUWiFiTrafficPeer : NSObject
{
    BOOL _active;
    unsigned int _trafficFlags;
    NSString *_sessionID;
    CDUnion_fab80606 _peerIP;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) unsigned int trafficFlags; // @synthesize trafficFlags=_trafficFlags;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) CDUnion_fab80606 peerIP; // @synthesize peerIP=_peerIP;
- (id)peerMACAddressData;

@end

