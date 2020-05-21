//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, _SFAccessPolicy, _SFCredential;

@protocol SFKeychainServerProtocol

@optional
- (void)rpcReplaceCredential:(_SFCredential *)arg1 withNewCredential:(_SFCredential *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)rpcReplaceOldCredential:(_SFCredential *)arg1 withNewCredential:(_SFCredential *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)rpcRemoveCredentialWithPersistentIdentifier:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)rpcLookupCredentialsForServiceIdentifiers:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)rpcFetchPasswordCredentialForPersistentIdentifier:(NSString *)arg1 reply:(void (^)(_SFPasswordCredential *, NSString *, NSError *))arg2;
- (void)rpcAddCredential:(_SFCredential *)arg1 withAccessPolicy:(_SFAccessPolicy *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
@end

