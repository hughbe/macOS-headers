//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlags;
@protocol MSFlagChangeTriageActionDelegate;

@interface MSFlagChangeTriageAction : MSTriageAction
{
    long long _reason;
}

@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
- (id)_changeAction;
@property(readonly, nonatomic) ECMessageFlags *messageFlags;
@property(readonly, nonatomic) BOOL flagState;
- (void)_toggleFlagWithBuilder:(id)arg1;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 reason:(long long)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak id <MSFlagChangeTriageActionDelegate> delegate; // @dynamic delegate;

@end

