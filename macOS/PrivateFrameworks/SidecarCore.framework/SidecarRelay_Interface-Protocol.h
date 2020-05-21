//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SidecarCore/SidecarCore_Interface-Protocol.h>

@class NSData, NSError, NSString, NSUUID;

@protocol SidecarRelay_Interface <SidecarCore_Interface>
- (void)relayDiagnose:(void (^)(NSData *, NSError *))arg1;
- (void)relaySession:(long long)arg1 timeSyncWithCompletion:(void (^)(unsigned long long, NSError *))arg2;
- (void)relaySession:(long long)arg1 closeStream:(NSString *)arg2;
- (void)relaySession:(long long)arg1 listenStreamType:(long long)arg2 flags:(unsigned long long)arg3 identifier:(NSString *)arg4 processUniqueID:(unsigned long long)arg5 completion:(void (^)(SidecarStream *, NSError *))arg6;
- (void)relaySession:(long long)arg1 connectStreamType:(long long)arg2 flags:(unsigned long long)arg3 identifier:(NSString *)arg4 processUniqueID:(unsigned long long)arg5 completion:(void (^)(SidecarStream *, NSError *))arg6;
- (void)relaySessionDealloc:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)relaySessionClose:(long long)arg1 error:(NSError *)arg2 completion:(void (^)(NSError *))arg3;
- (void)relaySession:(long long)arg1 sendOPACKData:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)relaySessionOpen:(NSUUID *)arg1 reconnect:(NSUUID *)arg2 serviceIdentifier:(NSString *)arg3 destination:(NSUUID *)arg4 transport:(long long)arg5 completion:(void (^)(NSError *))arg6;
- (void)relayDevicesForServiceIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)relayServicePresenterReady:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)relayRegisterServicePresenter:(void (^)(NSError *))arg1;
- (void)relayOptOutOfReconnect:(void (^)(NSError *))arg1;
- (void)relayServiceProviderReady:(NSUUID *)arg1;
- (void)relayRegisterServiceProvider:(void (^)(NSError *))arg1;
@end

