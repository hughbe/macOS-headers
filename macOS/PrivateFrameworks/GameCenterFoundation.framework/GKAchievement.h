//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSCopying-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKAchievementInternal, GKGame, GKPlayer, NSDate, NSString;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    BOOL _showsCompletionBanner;
    GKAchievementInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)resetAchievementsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)loadAchievementsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
@property BOOL showsCompletionBanner; // @synthesize showsCompletionBanner=_showsCompletionBanner;
@property(retain) GKAchievementInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)reportAchievementWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
@property(readonly, getter=isCompleted) BOOL completed;
@property GKGame *game; // @synthesize game=_game;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, retain) GKPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;
- (id)init;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_achievementDescription;

// Remaining properties
@property(readonly, copy) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(getter=isHidden) BOOL hidden; // @dynamic hidden;
@property(copy) NSString *identifier; // @dynamic identifier;
@property(copy) NSDate *lastReportedDate; // @dynamic lastReportedDate;
@property double percentComplete; // @dynamic percentComplete;

@end

