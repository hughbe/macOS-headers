//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AAKeychainManager : NSObject
{
}

+ (void)removePasswordForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3;
+ (void)setPassword:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3;
+ (void)initialize;

@end

