//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PocketAPIKeychainUtils : NSObject
{
}

+ (BOOL)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;

@end

