//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKChallenge.h>

@class GKLeaderboard, GKScore;

@interface GKScoreChallenge : GKChallenge
{
    GKScore *_score;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;
- (void)loadDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)detailsLoaded;
- (id)titleText;
@property(readonly, nonatomic) GKLeaderboard *leaderboard; // @dynamic leaderboard;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;

@end

