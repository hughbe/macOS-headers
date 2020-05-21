//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding>
{
    AXMPipelineContextInput *_previousInput;
    AXMPipelineContextInput *_currentInput;
    struct CGPoint _transpositionHistoryCircularBuffer[10];
    unsigned long long _transpositionHistoryLastRecordedIndex;
    BOOL _fillingHistoryBuffer;
    long long _registrationState;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long registrationState;
- (void)_recordTransposition:(struct CGPoint)arg1;
- (void)_resetImageRegistration;
- (void)_resetTranspositionHistory;
- (void)evaluate:(id)arg1;
- (id)_translationalImageRegistrationRequestForInput:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (BOOL)requiresVisionFramework;
- (void)nodeInitialize;

@end

