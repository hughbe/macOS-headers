//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EOSError : NSObject
{
}

+ (BOOL)errorIsNetworkingOrAppleConnectRelated:(id)arg1;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingRestoreErrorCode:(long long)arg2 userInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3;
+ (id)localizedDescriptionForErrorCode:(long long)arg1;

@end

