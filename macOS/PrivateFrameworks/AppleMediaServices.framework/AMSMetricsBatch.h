//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSMetricsBatch : NSObject
{
    BOOL _containsLoadURL;
    ACAccount *_account;
    NSString *_canaryIdentifier;
    NSArray *_droppedEvents;
    NSArray *_eventDictionaries;
    NSArray *_events;
    NSURL *_reportURL;
    NSArray *_skippedEvents;
}

- (void).cxx_destruct;
@property(retain) NSArray *skippedEvents; // @synthesize skippedEvents=_skippedEvents;
@property(retain) NSURL *reportURL; // @synthesize reportURL=_reportURL;
@property(retain) NSArray *events; // @synthesize events=_events;
@property(retain) NSArray *eventDictionaries; // @synthesize eventDictionaries=_eventDictionaries;
@property(retain) NSArray *droppedEvents; // @synthesize droppedEvents=_droppedEvents;
@property BOOL containsLoadURL; // @synthesize containsLoadURL=_containsLoadURL;
@property(retain) NSString *canaryIdentifier; // @synthesize canaryIdentifier=_canaryIdentifier;
@property(retain) ACAccount *account; // @synthesize account=_account;

@end

