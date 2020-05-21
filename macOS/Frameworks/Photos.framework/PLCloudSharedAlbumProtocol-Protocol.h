//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PLAlbumProtocol-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSOrderedSet, NSString, PLCloudSharedAlbumInvitationRecord;

@protocol PLCloudSharedAlbumProtocol <PLAlbumProtocol>
@property(nonatomic) BOOL cloudNotificationsEnabled;
@property(readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property(readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property(readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSString *cloudPersonID;
@property(retain, nonatomic) NSDate *cloudLastContributionDate;
@property(retain, nonatomic) NSDate *cloudCreationDate;
@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property unsigned long long unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber *unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet *invitationRecords;
@property(retain, nonatomic) NSString *publicURL;
@property(retain, nonatomic) NSDate *cloudSubscriptionDate;
@property(nonatomic) BOOL cloudOwnerIsWhitelisted;
@property(retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property(retain, nonatomic) NSString *cloudOwnerEmail;
@property(retain, nonatomic) NSString *cloudOwnerFullName;
@property(retain, nonatomic) NSString *cloudOwnerLastName;
@property(retain, nonatomic) NSString *cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary *cloudMetadata;
@property(retain, nonatomic) NSString *cloudGUID;
- (void)userDeleteSubscriberRecord:(PLCloudSharedAlbumInvitationRecord *)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)arg1 count:(unsigned long long *)arg2 showsProgress:(char *)arg3;
- (void)updateCloudLastContributionDateWithDate:(NSDate *)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(NSDate *)arg1;
- (NSString *)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
- (NSString *)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
@end

