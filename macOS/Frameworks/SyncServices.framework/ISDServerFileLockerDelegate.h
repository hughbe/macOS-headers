//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISDServerFileLockerDelegate : NSObject
{
}

+ (id)instance;
- (void)fileLocker:(id)arg1 lockWasStolen:(id)arg2;
- (int)fileLocker:(id)arg1 actionForApparentlyAbandonedLock:(id)arg2 onAttempt:(int)arg3;

@end

