//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BSXPCServiceConnectionMessage, OS_xpc_object;

@interface FBSXPCMessage : NSObject
{
    NSObject<OS_xpc_object> *_payload;
    id <BSXPCServiceConnectionMessage> _reply;
}

+ (id)messageWithBSXPCMessage:(id)arg1 ownReply:(BOOL)arg2;
+ (id)messageWithPacker:(CDUnknownBlockType)arg1;
+ (id)messageWithPayload:(id)arg1;
+ (id)message;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *payload; // @synthesize payload=_payload;
- (void)sendReplyMessageWithPacker:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMessagePacker:(CDUnknownBlockType)arg1;
- (id)initWithMessagePayload:(id)arg1;

@end

