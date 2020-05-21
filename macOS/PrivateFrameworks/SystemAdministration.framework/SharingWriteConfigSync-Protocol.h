//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSString;

@protocol SharingWriteConfigSync

@optional
- (oneway void)requestNumberOfClientsForProtocols:(NSArray *)arg1 authorization:(NSData *)arg2 result:(void (^)(int, unsigned int))arg3;
- (oneway void)setGuestForProtocol:(NSArray *)arg1 enabled:(BOOL)arg2 authorization:(NSData *)arg3 result:(void (^)(int))arg4;
- (oneway void)setNSCProtocolEnabled:(NSArray *)arg1 enabled:(BOOL)arg2 authorization:(NSData *)arg3 result:(void (^)(int))arg4;
- (oneway void)nscServerCancelShutdown:(NSString *)arg1 refNum:(unsigned int)arg2 authorization:(NSData *)arg3 result:(void (^)(int))arg4;
- (oneway void)nscServerShutdown:(NSString *)arg1 withDelay:(int)arg2 authorization:(NSData *)arg3 result:(void (^)(int, unsigned int))arg4;
- (oneway void)setInetDServiceEnabled:(NSString *)arg1 enabled:(BOOL)arg2 authorization:(NSData *)arg3 result:(void (^)(BOOL))arg4;
@end

