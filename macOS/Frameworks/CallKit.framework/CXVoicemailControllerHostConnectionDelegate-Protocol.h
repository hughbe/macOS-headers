//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXTransaction, CXVoicemailControllerHostConnection;

@protocol CXVoicemailControllerHostConnectionDelegate <NSObject>
- (void)voicemailControllerHostConnection:(CXVoicemailControllerHostConnection *)arg1 requestTransaction:(CXTransaction *)arg2 completion:(void (^)(NSError *))arg3;
- (void)voicemailControllerHostConnection:(CXVoicemailControllerHostConnection *)arg1 requestVoicemails:(void (^)(NSArray *))arg2;
- (void)voicemailControllerHostConnectionInvalidated:(CXVoicemailControllerHostConnection *)arg1;
@end

