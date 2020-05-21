//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSService, NSArray, NSMutableSet, NSString;
@protocol MSPSharedTripGroupSessionDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPSharedTripGroupSession : NSObject
{
    BOOL _joined;
    NSString *_joinedFromHandle;
    NSString *_joinedFromAccountIdentifier;
    BOOL _initiator;
    NSString *_groupID;
    unsigned long long _nbClients;
    NSMutableSet *_liveModeParticipantIdentifiers;
    IDSService *_sharingService;
    NSMutableSet *_identifiers;
    NSObject<OS_os_transaction> *_transaction;
    NSString *_initiatorIdentifier;
    NSString *_initiatorDisplayName;
    id <MSPSharedTripGroupSessionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MSPSharedTripGroupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *initiatorDisplayName; // @synthesize initiatorDisplayName=_initiatorDisplayName;
@property(readonly, nonatomic) NSString *initiatorIdentifier; // @synthesize initiatorIdentifier=_initiatorIdentifier;
- (void)participantDidLeave:(id)arg1;
- (void)participantDidJoin:(id)arg1;
- (BOOL)_validParticipant:(id)arg1;
- (id)_currentRoutePath;
- (void)sendCommand:(id)arg1 fromHandle:(id)arg2 fromAccountID:(id)arg3;
- (void)sendChunkedMessage:(id)arg1 to:(id)arg2;
- (void)_sendChunkMessage:(id)arg1 to:(id)arg2 packet:(id)arg3;
- (void)_sharingEndedWithError:(id)arg1;
- (void)_sharingEnded;
- (BOOL)sessionIsAliveAfterRemovingSharingIdentifiers:(id)arg1;
- (void)addSharingWith:(id)arg1;
@property(readonly, nonatomic) BOOL inLiveMode;
- (void)_leaveLivemode;
- (void)_joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2;
- (void)leaveLiveModeForced;
- (BOOL)leaveLiveModeIfNeeded;
- (void)joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2;
@property(readonly, nonatomic) NSArray *accountIdentifiers;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithService:(id)arg1 groupID:(id)arg2 initiator:(BOOL)arg3 initiatorIdentifier:(id)arg4;

@end

