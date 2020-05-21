//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TransparencyTranscript : NSObject
{
    NSString *_context;
    NSMutableArray *_events;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *events; // @synthesize events=_events;
@property(retain) NSString *context; // @synthesize context=_context;
- (id)serialize;
- (void)stopEventWithFailure:(id)arg1 error:(id)arg2;
- (void)stopEventWithSuccess:(id)arg1;
- (void)startEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

