//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalActionReplayer.h>

#import <EmailCore/ECIMAPLocalActionReplayer-Protocol.h>

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECIMAPFlagChangeUndownloadedActionReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>
{
    id <ECIMAPServerInterface> serverInterface;
    id <ECIMAPLocalActionReplayerDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ECIMAPLocalActionReplayerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) id <ECIMAPServerInterface> serverInterface; // @synthesize serverInterface;
- (id)replayAction;

@end

