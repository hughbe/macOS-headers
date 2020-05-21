//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ACDEClient/NSObject-Protocol.h>

@class NSString;
@protocol ACCAuthContextProtocol;

@protocol ACC2SVTransportControllerProtocol <NSObject>
- (void)verifySecureCodeWithContext:(id <ACCAuthContextProtocol>)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)generateAndSendSecCodeWithContext:(id <ACCAuthContextProtocol>)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)loadTrustedDevicesWithContext:(id <ACCAuthContextProtocol>)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;

@optional
- (void)cancelImageFetching;
- (void)getImageWithURL:(NSString *)arg1 completion:(void (^)(NSData *))arg2;
- (void)validateServiceTicketWithContext:(id <ACCAuthContextProtocol>)arg1 completion:(void (^)(NSError *))arg2;
- (void)verifyRecoveryKeyWithContext:(id <ACCAuthContextProtocol>)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

