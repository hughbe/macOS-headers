//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSSet, NSString, TUHandle;

@protocol TUCallFilterControllerXPCServer <NSObject>
- (oneway void)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3 reply:(void (^)(BOOL))arg4;
- (oneway void)policyForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (oneway void)filterStatusForAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(unsigned long long))arg3;
- (oneway void)shouldRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(BOOL)arg3 reply:(void (^)(BOOL))arg4;
- (oneway void)containsRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(BOOL)arg3 reply:(void (^)(BOOL))arg4;
- (oneway void)willRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 reply:(void (^)(BOOL))arg3;
@end

