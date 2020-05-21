//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface SOUserNotificationHelper : NSObject
{
    NSBundle *_bundle;
}

+ (id)sharedHelper;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)subtitleForChatRoom:(id)arg1;
- (void)postAlertNotificationMentioningMeInChat:(id)arg1 message:(id)arg2;
- (void)clearAllUserNotificationsForGuid:(id)arg1;
- (void)postUserNotification:(id)arg1;
- (id)userNotificationForChat:(id)arg1 sound:(id)arg2;
- (id)userNotificationForMessage:(id)arg1 chat:(id)arg2 sound:(id)arg3 buddyImage:(id)arg4;
- (id)_firstImageForMessage:(id)arg1;
- (id)_userNotificationWithTitle:(id)arg1 subtitle:(id)arg2 infomativeText:(id)arg3 actionButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 userInfo:(id)arg6 identifier:(id)arg7 date:(id)arg8 sound:(id)arg9 peopleIdentifiers:(id)arg10 buddyImage:(id)arg11 attachedImage:(id)arg12 responsePlaceholder:(id)arg13 serviceIsiMessage:(BOOL)arg14 emojiSubstitutionEnabled:(BOOL)arg15 isBusiness:(BOOL)arg16;
- (id)init;

@end

