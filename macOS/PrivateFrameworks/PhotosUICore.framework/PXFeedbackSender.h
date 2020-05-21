//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXFeedbackSender : NSObject
{
    unsigned long long _feedbackType;
    BOOL _userLikedResults;
}

- (void)_incrementMessageTracerCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementMessageTracerCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementAGGDCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_sendFeedbackEntryToOSService:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)generateFeedbackParamsStringForEntry:(id)arg1;
- (void)testTalkToServer;
- (BOOL)sendPendingFeedbackToServer;
- (BOOL)sendFeedbackWithFeedbackEntryUUID:(id)arg1;
- (void)sendFeedbackToServer:(id)arg1;
- (void)sendFeedback:(id)arg1 forFeedbackType:(unsigned long long)arg2;

@end

