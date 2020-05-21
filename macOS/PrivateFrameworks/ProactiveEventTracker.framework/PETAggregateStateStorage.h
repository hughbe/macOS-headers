//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PETAggregateStateStorage : NSObject
{
}

+ (id)storageOnDisk:(id)arg1;
+ (id)storageInMemory;
- (void)saveCorruptState;
- (void)reset;
- (BOOL)resetLocked;
- (void)runWithLock:(CDUnknownBlockType)arg1;
- (void)expand:(unsigned long long)arg1 andRunWithLock:(CDUnknownBlockType)arg2;

@end

