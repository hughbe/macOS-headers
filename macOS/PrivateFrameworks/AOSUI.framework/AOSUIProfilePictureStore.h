//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, CNContact, CNContactStore, NSImage;

@interface AOSUIProfilePictureStore : NSObject
{
    struct os_unfair_lock_s _profilePictureLock;
    CNContactStore *_contactStore;
    ACAccount *_account;
    NSImage *_cachedImage;
    struct CGRect _cachedImageCropRect;
    NSImage *_croppedImage;
    CNContact *_cachedContact;
}

+ (id)sharedProfilePictureStoreForAccount:(id)arg1;
- (void).cxx_destruct;
- (id)_profilePictureLocalCacheURL;
- (void)_removeCachedAppleAccountIcon;
- (void)_saveProfilePictureToCache:(id)arg1 cropRect:(struct CGRect)arg2;
- (struct CGRect)_cachedProfilePictureRect;
- (id)_cachedProfilePictureFromDisk;
- (id)_contactStore;
- (void)_postAccountPictureChangedNotification;
- (void)setProfilePicture:(id)arg1 withCropRect:(struct CGRect)arg2 andCroppedImage:(id)arg3;
- (id)_contactKeysToFetch;
- (id)_cardMatchingEmail:(id)arg1;
- (id)_meCard;
- (id)_imageForContact:(id)arg1;
- (void)_loadImageForAccount;
- (void)_initLoadImageForAccount;
@property(readonly, copy, nonatomic) CNContact *contact;
@property(readonly, nonatomic) struct CGRect imageCropRect;
@property(readonly, copy, nonatomic) NSImage *profilePicture;
@property(readonly, copy, nonatomic) NSImage *editorPicture;
- (void)dealloc;
- (void)_meCardDidChange:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

