//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AskPermission/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface PRRequest : NSObject <NSSecureCoding>
{
    BOOL _requestedOnThisDevice;
    NSString *_requestID;
    NSString *_ask;
    NSDictionary *_requestInfo;
    unsigned long long _requestStatus;
    NSNumber *_requesterDSID;
    NSNumber *_responderDSID;
    NSString *_clientIdentifier;
    NSDate *_dateAddedToLocalCache;
    NSString *_statusDescription;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property(copy) NSDate *dateAddedToLocalCache; // @synthesize dateAddedToLocalCache=_dateAddedToLocalCache;
@property BOOL requestedOnThisDevice; // @synthesize requestedOnThisDevice=_requestedOnThisDevice;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy) NSNumber *responderDSID; // @synthesize responderDSID=_responderDSID;
@property(copy) NSNumber *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property unsigned long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(copy) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(copy) NSString *ask; // @synthesize ask=_ask;
@property(copy) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithAsk:(id)arg1 requestInfo:(id)arg2;

@end

