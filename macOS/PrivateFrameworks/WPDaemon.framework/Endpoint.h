//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface Endpoint : NSObject
{
    unsigned char _requireAck;
    BOOL _requireEncyption;
    NSUUID *_clientUUID;
}

- (void).cxx_destruct;
@property(retain) NSUUID *clientUUID; // @synthesize clientUUID=_clientUUID;
@property BOOL requireEncyption; // @synthesize requireEncyption=_requireEncyption;
@property unsigned char requireAck; // @synthesize requireAck=_requireAck;
- (id)description;

@end

