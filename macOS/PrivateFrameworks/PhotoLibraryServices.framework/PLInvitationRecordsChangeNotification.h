//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLGenericAlbum;

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification
{
    BOOL _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;
- (void).cxx_destruct;
- (void)_calculateDiffs;
@property(readonly, nonatomic) PLGenericAlbum *album;
- (id)name;
@property(readonly, nonatomic) BOOL invitationRecordsDidChange;
- (id)userInfo;

@end

