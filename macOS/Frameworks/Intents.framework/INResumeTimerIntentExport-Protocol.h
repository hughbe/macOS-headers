//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INTimer, NSNumber;

@protocol INResumeTimerIntentExport <NSObject, JSExport>
@property(copy) NSNumber *resumeMultiple;
@property(copy) INTimer *targetTimer;
- (id)init;
@end

