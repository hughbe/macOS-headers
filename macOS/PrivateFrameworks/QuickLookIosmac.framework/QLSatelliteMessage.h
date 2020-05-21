//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol OS_xpc_object;

@interface QLSatelliteMessage : NSObject
{
    NSObject<OS_xpc_object> *_message;
}

+ (void)setIsForTesting:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)sendReply:(id)arg1;
- (BOOL)sendOnConnection:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
@property(readonly) NSObject<OS_xpc_object> *xpcConnection;
@property(readonly) NSObject<OS_xpc_object> *xpcMessage;
- (id)initWithXPCMessage:(id)arg1;
- (id)init;
- (BOOL)hasRequestInfo;
- (id)description;
- (struct __QLRequest *)copyRequest;
- (void)setRequest:(struct __QLRequest *)arg1;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (void)setUUIDBytes:(unsigned char [16])arg1;
@property(copy) NSUUID *uuid;
@property int type;

@end

