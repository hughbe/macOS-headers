//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BridgeXPCConnectionMessage : NSObject
{
    CDUnknownBlockType _barrier_block;
    NSData *_msg_hdr;
    NSData *_msg_body;
}

- (void).cxx_destruct;
@property(retain) NSData *msg_body; // @synthesize msg_body=_msg_body;
@property(retain) NSData *msg_hdr; // @synthesize msg_hdr=_msg_hdr;
@property(copy) CDUnknownBlockType barrier_block; // @synthesize barrier_block=_barrier_block;

@end

