//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarCache, CNContact;
@protocol CNUIPRLikenessProvider;

@protocol CNAvatarCacheDelegate <NSObject>
- (void)avatarCache:(CNAvatarCache *)arg1 didUpdateLikeness:(id <CNUIPRLikenessProvider>)arg2 forContact:(CNContact *)arg3;
@end

