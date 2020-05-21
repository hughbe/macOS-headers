//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationAttachmentOptions.h>

#import <UserNotifications/UNNotificationAttachmentThumbnailOptions-Protocol.h>

@class NSString;

@interface UNMovieNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions>
{
    BOOL _thumbnailHidden;
    CDStruct_1b6d18a9 _thumbnailTimestamp;
    struct CGRect _thumbnailClippingRect;
}

+ (BOOL)supportsSecureCoding;
+ (id)optionsFromOptionsDictionary:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 thumbnailTimestamp; // @synthesize thumbnailTimestamp=_thumbnailTimestamp;
@property(readonly, nonatomic) struct CGRect thumbnailClippingRect; // @synthesize thumbnailClippingRect=_thumbnailClippingRect;
@property(readonly, nonatomic) BOOL thumbnailHidden; // @synthesize thumbnailHidden=_thumbnailHidden;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithThumbnailHidden:(BOOL)arg1 thumbnailClippingRect:(struct CGRect)arg2 thumbnailTimestamp:(CDStruct_1b6d18a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

