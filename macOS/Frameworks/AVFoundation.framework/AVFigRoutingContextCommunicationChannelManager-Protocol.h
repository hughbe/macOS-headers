//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel, NSDictionary;

@protocol AVFigRoutingContextCommunicationChannelManager <NSObject>
@property(readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property __weak AVFigRoutingContextOutputContextImpl *parentOutputContextImpl;
- (AVOutputContextCommunicationChannel *)openCommunicationChannelWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
@end

