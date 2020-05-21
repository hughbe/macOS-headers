//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/NSFastEnumeration-Protocol.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet;
@protocol SVSTranscriptItemGroupDelegate;

__attribute__((visibility("hidden")))
@interface SVSTranscriptItemGroup : NSObject <NSFastEnumeration>
{
    NSMutableArray *_transcriptItems;
    NSMutableIndexSet *_insertionIndexes;
    BOOL _provisional;
    BOOL _waitsForConfirmation;
    double _presentationDelay;
    BOOL _eligibleForPresentation;
    BOOL _presentationDelayElapsed;
    id <SVSTranscriptItemGroupDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=_presentationDelayElapsed, setter=_setPresentationDelayElapsed:) BOOL presentationDelayElapsed; // @synthesize presentationDelayElapsed=_presentationDelayElapsed;
@property(nonatomic) __weak id <SVSTranscriptItemGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL waitsForConfirmation; // @synthesize waitsForConfirmation=_waitsForConfirmation;
@property(nonatomic, getter=isEligibleForPresentation) BOOL eligibleForPresentation; // @synthesize eligibleForPresentation=_eligibleForPresentation;
@property(readonly, nonatomic, getter=isProvisional) BOOL provisional; // @synthesize provisional=_provisional;
- (void)removeElementAtIndex:(long long)arg1;
- (void)shiftInsertionIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;
- (void)replaceTranscriptItem:(id)arg1 withTranscriptItem:(id)arg2 cancelPresentationDelay:(BOOL)arg3;
- (unsigned long long)insertionIndexForTranscriptItem:(id)arg1;
- (void)_presentationEligibilityConditionDidChange;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) NSIndexSet *insertionIndexes;
@property(readonly, nonatomic) NSArray *transcriptItems;
- (id)description;
- (id)init;
- (id)initWithTranscriptItems:(id)arg1 insertionIndexes:(id)arg2 provisional:(BOOL)arg3 waitsForConfirmation:(BOOL)arg4 presentationDelay:(double)arg5;

@end

