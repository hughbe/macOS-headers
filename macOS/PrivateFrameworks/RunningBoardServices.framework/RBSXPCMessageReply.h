//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSXPCCoder, RBSXPCMessageContext;
@protocol BSXPCEncoding><BSXPCDecoding;

@interface RBSXPCMessageReply : NSObject
{
    BSXPCCoder *_payload;
    RBSXPCMessageContext *_context;
    BOOL _sent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RBSXPCMessageContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <BSXPCEncoding><BSXPCDecoding> payload; // @synthesize payload=_payload;
- (void)send;
- (void)encode:(CDUnknownBlockType)arg1;
- (void)prepareForHandoff;
- (id)_initWithMessage:(id)arg1;

@end

