//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDeviceToDeviceShareInvitationToken, HMHome, HMUser, NSString, NSURL;

@interface HMUserCloudShareInvitation : NSObject
{
    NSURL *_shareURL;
    CKDeviceToDeviceShareInvitationToken *_shareToken;
    NSString *_containerID;
    HMHome *_home;
    HMUser *_user;
    HMUser *_fromUser;
}

- (void).cxx_destruct;
@property(readonly) HMUser *fromUser; // @synthesize fromUser=_fromUser;
@property(readonly) HMUser *user; // @synthesize user=_user;
@property(readonly) HMHome *home; // @synthesize home=_home;
@property(readonly) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly) CKDeviceToDeviceShareInvitationToken *shareToken; // @synthesize shareToken=_shareToken;
@property(readonly) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6;

@end

