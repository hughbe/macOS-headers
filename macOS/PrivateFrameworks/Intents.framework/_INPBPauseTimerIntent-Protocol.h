//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBIntentMetadata, _INPBTimer;

@protocol _INPBPauseTimerIntent <NSObject>
@property(readonly, nonatomic) BOOL hasTargetTimer;
@property(retain, nonatomic) _INPBTimer *targetTimer;
@property(nonatomic) BOOL hasPauseMultiple;
@property(nonatomic) BOOL pauseMultiple;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@end

