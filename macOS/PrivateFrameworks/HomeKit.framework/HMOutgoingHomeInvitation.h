//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMHomeInvitation.h>

@class HMMutableArray, HMUser, NSArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation
{
    HMMutableArray *_accessoryInvitations;
    HMUser *_invitee;
}

+ (BOOL)supportsSecureCoding;
+ (id)homeInvitationsFromData:(id)arg1 home:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMUser *invitee; // @synthesize invitee=_invitee;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (void)_cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *accessoryInvitations;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;

@end

