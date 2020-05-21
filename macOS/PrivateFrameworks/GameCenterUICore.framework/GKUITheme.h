//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKNetworkImageSource, NSCache, NSImage;

@interface GKUITheme : NSObject
{
    NSCache *_resourceCache;
}

+ (id)resourceCache;
+ (id)sharedTheme;
+ (id)themeForGame:(id)arg1;
- (void).cxx_destruct;
- (id)resourceWithName:(id)arg1 missingHandler:(CDUnknownBlockType)arg2;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSCache *resourceCache;
- (id)eventIconImage;
- (id)bubbleHighlight;
- (id)bubbleTurns;
- (id)bubbleSignin;
- (id)bubbleShare;
- (id)bubbleRequests;
- (id)bubblePoints;
- (id)bubblePlay;
- (id)bubbleInvite;
- (id)bubbleGames;
- (id)bubbleFriends;
- (id)bubbleDecline;
- (id)bubbleChallenges;
- (id)bubbleAccept;
- (id)contactsCircleImage;
- (id)statusDotImage;
- (id)removePlayerButtonImage;
- (id)addPlayerButtonImage;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)defaultPlayerPhoto;
- (id)defaultLeaderboardIcon;
@property(readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *photoDetailSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *photoListSource;
- (id)placeholderSourceWithDimension:(long long)arg1;
- (id)monogramSourceWithDimension:(long long)arg1;
- (id)avatarSourceWithDimension:(long long)arg1;
@property(readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property(readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *macGameIconSource;
- (id)achievementsNotStartedIcon;
- (id)achievementsDefaultIcon;
@property(readonly, retain, nonatomic) NSImage *interactiveRatingStarsBackground;
@property(readonly, retain, nonatomic) NSImage *interactiveRatingStarsForeground;
@property(readonly, retain, nonatomic) NSImage *ratingStarsForegroundImage;
@property(readonly, retain, nonatomic) NSImage *ratingStarsBackgroundImage;
- (id)imageNamed:(id)arg1;
- (id)_catalogImageWithName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)clearResourceCache;
- (BOOL)useStandardControls;

@end

