//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface ADSearchObject : NSObject
{
    NSString *_sponsoredSearchRequestData;
    NSString *_routingInfoData;
    NSString *_deviceRequestID;
    NSString *_userTargetingIdentifier;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *userTargetingIdentifier; // @synthesize userTargetingIdentifier=_userTargetingIdentifier;
@property(retain, nonatomic) NSString *deviceRequestID; // @synthesize deviceRequestID=_deviceRequestID;
@property(retain, nonatomic) NSString *routingInfoData; // @synthesize routingInfoData=_routingInfoData;
@property(retain, nonatomic) NSString *sponsoredSearchRequestData; // @synthesize sponsoredSearchRequestData=_sponsoredSearchRequestData;
- (id)init;

@end

