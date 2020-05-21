//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSTargetFolderIdType, NSArray;

@interface EWSCreateItemType : EWSBaseRequestType
{
    EWSTargetFolderIdType *_SavedItemFolderId;
    NSArray *_Items;
    long long _MessageDisposition;
    long long _SendMeetingInvitations;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long SendMeetingInvitations; // @synthesize SendMeetingInvitations=_SendMeetingInvitations;
@property(nonatomic) long long MessageDisposition; // @synthesize MessageDisposition=_MessageDisposition;
@property(copy, nonatomic) NSArray *Items; // @synthesize Items=_Items;
@property(retain, nonatomic) EWSTargetFolderIdType *SavedItemFolderId; // @synthesize SavedItemFolderId=_SavedItemFolderId;

@end

