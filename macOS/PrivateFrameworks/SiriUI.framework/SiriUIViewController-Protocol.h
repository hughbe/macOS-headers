//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext, AceObject, NSString;

@protocol SiriUIViewController <NSObject>
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationTurnContext;
@property(retain, nonatomic) AceObject *aceObject;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;

@optional
- (void)siriDidStopSpeakingWithIdentifier:(NSString *)arg1 speechQueueIsEmpty:(BOOL)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(NSString *)arg1;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (NSString *)navigationTitle;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredHeight;
@end

