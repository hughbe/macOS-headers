//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKCustomTournamentDelegate-Protocol.h>

@class GKPlayer, GKTournament;

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate>
{
    GKTournament *_tournament;
    GKPlayer *_creator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GKPlayer *creator; // @synthesize creator=_creator;
@property(nonatomic) __weak GKTournament *tournament; // @synthesize tournament=_tournament;
- (void)declineInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acceptInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

