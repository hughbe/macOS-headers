//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSStreamsProtocolDelegate-Protocol.h>

@class MSResetServerProtocol, NSError;

@protocol MSResetServerProtocolDelegate <MSStreamsProtocolDelegate>
- (void)resetServerProtocol:(MSResetServerProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
- (void)resetServerProtocol:(MSResetServerProtocol *)arg1 didFinishWithError:(NSError *)arg2;
@end

