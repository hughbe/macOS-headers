//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKSyncDeletedEventIDs : NSObject
{
    NSMutableDictionary *_deletedEventIDsBySourceDeviceID;
}

- (void).cxx_destruct;
- (void)addDeletedEventID:(id)arg1 forSourceDeviceID:(id)arg2;
- (id)deletedEventIDsForSourceDeviceID:(id)arg1;
- (id)sourceDeviceIDs;
- (unsigned long long)count;
- (id)init;

@end

