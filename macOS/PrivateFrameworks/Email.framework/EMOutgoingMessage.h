//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMObject.h>

@class EMMessageObjectID, NSData;

@interface EMOutgoingMessage : EMObject
{
    BOOL _shouldSign;
    BOOL _shouldEncrypt;
    NSData *_messageData;
    long long _action;
    EMMessageObjectID *_originalMessageID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldEncrypt; // @synthesize shouldEncrypt=_shouldEncrypt;
@property(nonatomic) BOOL shouldSign; // @synthesize shouldSign=_shouldSign;
@property(retain, nonatomic) EMMessageObjectID *originalMessageID; // @synthesize originalMessageID=_originalMessageID;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageData:(id)arg1 action:(long long)arg2 originalMessageID:(id)arg3 shouldSign:(BOOL)arg4 shouldEncrypt:(BOOL)arg5;
- (id)initWithMessageData:(id)arg1;

@end

