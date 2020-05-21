//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@protocol PLAssetsdNotificationServiceProtocol <NSObject>
- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(NSArray *)arg1 thumbnailImageData:(NSData *)arg2 notificationTitle:(NSString *)arg3 notificationSubtitle:(NSString *)arg4;
- (void)noteSuggestedCMMAlertViewedWithCMMUUID:(NSString *)arg1;
- (void)noteSuggestedCMMAlertWithCMMUUID:(NSString *)arg1 notificationDeliveryDate:(NSDate *)arg2;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(NSString *)arg1;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(NSString *)arg1 acceptInvitation:(BOOL)arg2;
- (void)noteInterestingMemoryAlertViewedWithUUID:(NSString *)arg1;
- (void)noteInterestingMemoryAlertWithMemoryUUID:(NSString *)arg1 notificationDeliveryDate:(NSDate *)arg2;
- (void)userViewedNotificationWithAlbumCloudGUID:(NSString *)arg1;
@end

