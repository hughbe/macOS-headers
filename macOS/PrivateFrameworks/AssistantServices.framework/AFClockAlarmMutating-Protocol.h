//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDate, NSString, NSURL, NSUUID;

@protocol AFClockAlarmMutating <NSObject>
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setDismissedDate:(NSDate *)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setIsSnoozed:(BOOL)arg1;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setRepeatOptions:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setIsFiring:(BOOL)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setAlarmID:(NSUUID *)arg1;
@end

