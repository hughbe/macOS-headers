//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXAllowedRPC-Protocol.h>

@class NSDictionary, NSString;

@protocol DTXConnectionRemoteReceiveQueueCalls <DTXAllowedRPC>
- (void)_notifyCompressionHint:(unsigned int)arg1 forChannelCode:(unsigned int)arg2;
- (void)_setTracerState:(unsigned int)arg1;
- (void)_channelCanceled:(unsigned int)arg1;
- (void)_notifyOfPublishedCapabilities:(NSDictionary *)arg1;
- (void)_requestChannelWithCode:(unsigned int)arg1 identifier:(NSString *)arg2;
@end

