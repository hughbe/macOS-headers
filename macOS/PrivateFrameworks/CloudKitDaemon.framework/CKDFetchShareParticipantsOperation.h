//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKDPublicIdentityLookupRequest, NSArray;

@interface CKDFetchShareParticipantsOperation : CKDOperation
{
    CDUnknownBlockType _shareParticipantFetchedBlock;
    CKDPublicIdentityLookupRequest *_pendingRequest;
    NSArray *_userIdentityLookupInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
@property(retain, nonatomic) CKDPublicIdentityLookupRequest *pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantFetchedBlock; // @synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock;
- (void)finishWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchIdentities;
- (void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

