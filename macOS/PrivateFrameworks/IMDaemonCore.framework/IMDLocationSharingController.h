//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMFSession;

@interface IMDLocationSharingController : NSObject
{
    FMFSession *_session;
}

+ (void)_addLocationShareItemToMatchingChats:(id)arg1 handleID:(id)arg2 hasStoredItem:(BOOL)arg3 broadcastChanges:(BOOL)arg4;
+ (void)addLocationShareItemToMatchingChats:(id)arg1;
+ (id)sharedInstance;
- (void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3;
- (void)receivedIncomingLocationSharePacket:(id)arg1;
- (void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2;
- (void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 account:(id)arg3;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didStartAbilityToGetLocationForHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3;
- (void)dealloc;
- (id)init;

@end

