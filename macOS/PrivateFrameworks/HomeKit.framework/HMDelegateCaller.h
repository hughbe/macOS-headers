//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDelegateCaller : NSObject
{
}

+ (id)delegateCallerWithOperationQueue:(id)arg1;
- (void)callCompletion:(CDUnknownBlockType)arg1 value:(BOOL)arg2 conflictName:(id)arg3 error:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 mediaSystem:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 proxiedDevice:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 snapshot:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 user:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 invitations:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 array:(id)arg2;
- (void)callCompletion:(CDUnknownBlockType)arg1 array:(id)arg2 additionalAccessoryInfo:(id)arg3 error:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 array:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 boolValue:(BOOL)arg3 array:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 actionSet:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 serviceGroup:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 zone:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 room:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 home:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 isUsingHomeKit:(BOOL)arg2 isUsingCloudServices:(BOOL)arg3 error:(id)arg4;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 dictionary:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 errorString:(id)arg2;
- (void)callCompletion:(CDUnknownBlockType)arg1 value:(BOOL)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 obj:(id)arg2 error:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2 obj:(id)arg3;
- (void)callCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)invokeBlock:(CDUnknownBlockType)arg1;
- (id)_localizedError:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

