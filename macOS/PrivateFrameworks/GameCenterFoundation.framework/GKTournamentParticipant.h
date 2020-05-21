//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKPlayer, GKTournamentParticipantInternal;

@interface GKTournamentParticipant : NSObject <NSSecureCoding>
{
    GKTournamentParticipantInternal *_internal;
    GKPlayer *_player;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain) GKTournamentParticipantInternal *internal; // @synthesize internal=_internal;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BOOL cheatingIndicator; // @dynamic cheatingIndicator;
@property(readonly, nonatomic) long long participantState; // @dynamic participantState;
@property(readonly, nonatomic) long long playerGroup; // @dynamic playerGroup;
@property(readonly, nonatomic) long long replayCount; // @dynamic replayCount;
@property(readonly, nonatomic) long long score; // @dynamic score;

@end

