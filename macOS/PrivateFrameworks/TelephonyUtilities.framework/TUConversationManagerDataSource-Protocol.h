//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSUUID, TUConversation, TUConversationMember;
@protocol TUConversationManagerDataSourceDelegate, TUConversationMediaControllerDataSourceDelegate;

@protocol TUConversationManagerDataSource <NSObject>
@property(nonatomic) __weak id <TUConversationMediaControllerDataSourceDelegate> mediaDelegate;
@property(nonatomic) __weak id <TUConversationManagerDataSourceDelegate> delegate;
@property(readonly, copy, nonatomic) NSDictionary *conversationsByGroupUUID;
- (void)invalidate;
- (void)registerWithCompletionHandler:(void (^)(void))arg1;
- (void)updateConversationWithUUID:(NSUUID *)arg1 participantPresentationContexts:(NSArray *)arg2;
- (void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(TUConversation *)arg2;
- (void)buzzMember:(TUConversationMember *)arg1 conversation:(TUConversation *)arg2;
- (void)addRemoteMembers:(NSSet *)arg1 toConversation:(TUConversation *)arg2;
@end

