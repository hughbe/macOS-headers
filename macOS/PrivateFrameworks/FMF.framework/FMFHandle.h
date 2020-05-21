//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isFamilyMember;
    BOOL _pending;
    BOOL _reachable;
    NSString *_identifier;
    NSString *_serverId;
    NSNumber *_dsid;
    NSArray *_aliasServerIds;
    NSArray *_invitationSentToIds;
    NSDictionary *_expiresByGroupId;
    NSString *_hashedDSID;
    NSNumber *_trackingTimestamp;
    NSNumber *_favoriteOrder;
    NSString *__prettyNameInternal;
    long long _idsStatus;
    NSString *_qualifiedIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)familyHandleWithId:(id)arg1 dsid:(id)arg2;
+ (id)handleWithId:(id)arg1 serverId:(id)arg2;
+ (id)handleWithId:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *qualifiedIdentifier; // @synthesize qualifiedIdentifier=_qualifiedIdentifier;
@property BOOL reachable; // @synthesize reachable=_reachable;
@property long long idsStatus; // @synthesize idsStatus=_idsStatus;
@property(copy, nonatomic) NSString *_prettyNameInternal; // @synthesize _prettyNameInternal=__prettyNameInternal;
@property(copy, nonatomic) NSNumber *favoriteOrder; // @synthesize favoriteOrder=_favoriteOrder;
@property(copy) NSNumber *trackingTimestamp; // @synthesize trackingTimestamp=_trackingTimestamp;
@property(getter=isPending) BOOL pending; // @synthesize pending=_pending;
@property(copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property(copy, nonatomic) NSDictionary *expiresByGroupId; // @synthesize expiresByGroupId=_expiresByGroupId;
@property(copy, nonatomic) NSArray *invitationSentToIds; // @synthesize invitationSentToIds=_invitationSentToIds;
@property(copy, nonatomic) NSArray *aliasServerIds; // @synthesize aliasServerIds=_aliasServerIds;
@property(nonatomic) BOOL isFamilyMember; // @synthesize isFamilyMember=_isFamilyMember;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (BOOL)isPhoneNumber;
- (void)clearFavoriteOrder;
- (id)recordId;
- (id)prettyName;
- (long long)prettyNameCompare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isSharingThroughGroupId:(id)arg1;
- (void)setICloudId:(id)arg1;
- (void)abPreferencesDidChange;
- (void)addressBookDidChange;

@end

