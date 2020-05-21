//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString, UNNotificationAction;

@interface UNMutableNotificationCategory : UNNotificationCategory
{
}

@property unsigned long long listPriority; // @dynamic listPriority;
@property unsigned long long backgroundStyle; // @dynamic backgroundStyle;
@property unsigned long long options; // @dynamic options;
@property(copy) NSString *actionsMenuTitle; // @dynamic actionsMenuTitle;
@property(copy) NSString *categorySummaryFormat; // @dynamic categorySummaryFormat;
@property(copy) NSString *hiddenPreviewsBodyPlaceholder; // @dynamic hiddenPreviewsBodyPlaceholder;
@property(copy) NSArray *intentIdentifiers; // @dynamic intentIdentifiers;
@property(copy) UNNotificationAction *alternateAction; // @dynamic alternateAction;
@property(copy) NSArray *minimalActions; // @dynamic minimalActions;
@property(copy) NSArray *actions; // @dynamic actions;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

