//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/_DPDaemonProtocol-Protocol.h>

@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol>
{
    NSXPCConnection *_daemonConnection;
}

+ (id)daemonAgentConnection;
+ (id)daemonConnection;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
- (void)retireReports:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)reportsNotYetSubmittedWithReply:(CDUnknownBlockType)arg1;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)init;

@end

