//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ABBuddyStatus : NSObject
{
    Class IMService;
    NSMutableDictionary *cache;
}

+ (BOOL)showStatus;
+ (id)sharedBuddyStatus;
- (void)updateStatus:(id)arg1;
- (void)statusUpdate:(id)arg1;
- (id)abServiceKeyForHandle:(id)arg1;
- (BOOL)isHandleAvailable:(id)arg1;
- (BOOL)isAvailable:(id)arg1;
- (id)statusImageForPerson:(id)arg1;
- (unsigned long long)statusForPerson:(id)arg1;
- (void)dealloc;
- (id)init;

@end

