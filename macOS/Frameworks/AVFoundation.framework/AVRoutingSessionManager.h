//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVRoutingSession, AVRoutingSessionManagerInternal, NSArray;

@interface AVRoutingSessionManager : NSObject
{
    AVRoutingSessionManagerInternal *_ivars;
}

+ (id)longFormVideoRoutingSessionManager;
+ (void)initialize;
- (BOOL)stopSuppressingLikelyDestinationsAndReturnError:(id *)arg1;
- (BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id *)arg1;
- (BOOL)startRoutingSessionWithOutputDeviceDescriptions:(id)arg1 error:(id *)arg2;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL prefersLikelyDestinationsOverCurrentRoutingSession;
@property(readonly) NSArray *allLikelyDestinations;
@property(readonly) NSArray *likelyExternalDestinations;
@property(readonly) AVRoutingSession *currentRoutingSession;
- (id)description;
- (void)dealloc;

@end

