//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOErrorHelper : NSObject
{
}

+ (BOOL)error:(id)arg1 hasCode:(long long)arg2 subcode:(long long)arg3;
+ (BOOL)error:(id)arg1 hasCode:(long long)arg2;
+ (void)raiseExceptionOnError:(id)arg1;
+ (id)errorNotSupported;
+ (id)doNotHandleBreakingRecursionWithCallerBundleIdentifier:(id)arg1;
+ (id)invalidURLError:(id)arg1;
+ (id)missingEntitlementError:(id)arg1;
+ (id)parameterErrorWithMessage:(id)arg1;
+ (id)silentInternalErrorWithMessage:(id)arg1;
+ (id)internalErrorWithMessage:(id)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 moreInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 subcode:(long long)arg2 message:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1;

@end

