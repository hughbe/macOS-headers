//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MNVoiceEventQueueDelegate;

__attribute__((visibility("hidden")))
@interface MNVoiceEventQueue : NSObject
{
    NSMutableArray *_queue;
    id <MNVoiceEventQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MNVoiceEventQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeEventsMatching:(id)arg1 includeEventToMatch:(BOOL)arg2;
- (void)removeAllEvents;
- (id)dequeueNextEvent;
- (BOOL)hasAnotherEvent;
- (void)addEvent:(id)arg1;
- (id)init;

@end

