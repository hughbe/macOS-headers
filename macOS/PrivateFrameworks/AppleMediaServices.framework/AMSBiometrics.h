//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSBiometrics : NSObject
{
}

+ (long long)state;
+ (id)_stateHeaderValueForAccount:(id)arg1;
+ (BOOL)_deleteKeysWithOptions:(id)arg1 error:(id *)arg2;
+ (long long)stateForAccount:(id)arg1;
+ (id)signChallenge:(id)arg1 withAccount:(id)arg2 clientInfo:(id)arg3 options:(id)arg4;
+ (id)setState:(long long)arg1 forAccount:(id)arg2;
+ (id)minimumACLVersionForAction:(long long)arg1;
+ (BOOL)isActionSupported:(long long)arg1 withConstraints:(id)arg2;
+ (BOOL)isActionSupported:(long long)arg1 withAccessControl:(struct __SecAccessControl *)arg2;
+ (id)headersWithAccount:(id)arg1 options:(id)arg2 signatureResult:(id)arg3;
+ (id)handleResponse:(id)arg1 session:(id)arg2 taskInfo:(id)arg3 shouldFallbackToPassword:(char *)arg4;
+ (BOOL)deleteKeysWithError:(id *)arg1;
+ (id)disableForAccount:(id)arg1;
+ (id)ACLVersionForConstraints:(id)arg1;
+ (id)ACLVersionForAccessControl:(struct __SecAccessControl *)arg1;
+ (void)setDeviceState:(long long)arg1;
+ (long long)type;
+ (long long)deviceState;

@end

