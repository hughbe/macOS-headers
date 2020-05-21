//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKPlayer.h>

@class CNContact;

@interface GKPlayer (Contact)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;
+ (id)monogramQueue;
+ (long long)sizeForPhotoSize:(long long)arg1;
@property(retain, nonatomic) CNContact *contact;
- (id)initWithContact:(id)arg1;
- (void)loadPlayerContactForAvatarControllerWithImageSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)mutableContactFromDisplayNameComponentsWithHandler:(CDUnknownBlockType)arg1;
- (void)clearInMemoryCachedAvatars;
- (void)_playerAvatarWithSize:(long long)arg1 useUIImage:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)avatarImageRenderer;
- (id)renderingScopeForPhotoSize:(long long)arg1;
- (id)placeholderImageWithPhotoSize:(long long)arg1;
- (void)stringForMonogramWithHandler:(CDUnknownBlockType)arg1;
- (void)displayNameComponentsWithHandler:(CDUnknownBlockType)arg1;
- (id)photoURLForSize:(long long)arg1;
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@end

