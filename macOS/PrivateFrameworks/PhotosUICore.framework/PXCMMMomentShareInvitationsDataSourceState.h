//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_momentShares;
    NSDictionary *_invitationsByMomentShareObjectID;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *invitationsByMomentShareObjectID; // @synthesize invitationsByMomentShareObjectID=_invitationsByMomentShareObjectID;
@property(readonly, nonatomic) PHFetchResult *momentShares; // @synthesize momentShares=_momentShares;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2;

@end

