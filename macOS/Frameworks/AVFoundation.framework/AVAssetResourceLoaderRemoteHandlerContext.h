//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_endpoint;
    unsigned long long _customURLHandlerObjectID;
    unsigned long long _authHandlerObjectID;
    unsigned long long _contentKeySessionHandlerObjectID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long contentKeySessionHandlerObjectID; // @synthesize contentKeySessionHandlerObjectID=_contentKeySessionHandlerObjectID;
@property(readonly, nonatomic) unsigned long long authHandlerObjectID; // @synthesize authHandlerObjectID=_authHandlerObjectID;
@property(readonly, nonatomic) unsigned long long customURLHandlerObjectID; // @synthesize customURLHandlerObjectID=_customURLHandlerObjectID;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *endpoint; // @synthesize endpoint=_endpoint;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1 customURLHandlerObjectID:(unsigned long long)arg2 authHandlerObjectID:(unsigned long long)arg3 contentKeySessionHandlerObjectID:(unsigned long long)arg4;

@end

