//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest
{
    NSArray *_playerInternals;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *playerInternals; // @synthesize playerInternals=_playerInternals;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

