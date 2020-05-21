//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockTimerMutating-Protocol.h>

@class AFClockTimer, NSDate, NSString, NSURL, NSUUID;

@interface _AFClockTimerMutation : NSObject <AFClockTimerMutating>
{
    AFClockTimer *_baseModel;
    NSUUID *_timerID;
    NSURL *_timerURL;
    BOOL _isFiring;
    NSString *_title;
    long long _state;
    double _duration;
    long long _type;
    double _fireTimeInterval;
    NSDate *_fireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimerID:1;
        unsigned int hasTimerURL:1;
        unsigned int hasIsFiring:1;
        unsigned int hasTitle:1;
        unsigned int hasState:1;
        unsigned int hasDuration:1;
        unsigned int hasType:1;
        unsigned int hasFireTimeInterval:1;
        unsigned int hasFireDate:1;
        unsigned int hasFiredDate:1;
        unsigned int hasDismissedDate:1;
        unsigned int hasLastModifiedDate:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setLastModifiedDate:(id)arg1;
- (void)setDismissedDate:(id)arg1;
- (void)setFiredDate:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireTimeInterval:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setIsFiring:(BOOL)arg1;
- (void)setTimerURL:(id)arg1;
- (void)setTimerID:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

