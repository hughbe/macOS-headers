//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABAccountPermissions-Protocol.h>

@class NSString;

@interface ABDefaultAccountPermissions : NSObject <ABAccountPermissions>
{
}

+ (id)defaultAccountPermissions;
- (BOOL)groupsCanRemoveMembers;
- (BOOL)canRemoveGroup:(id)arg1;
- (BOOL)canRenameGroup:(id)arg1;
- (BOOL)canEditGroup:(id)arg1;
- (BOOL)canCreateGroups;
- (BOOL)canEditPerson:(id)arg1;
- (BOOL)canDeletePeople;
- (BOOL)canCreatePeople;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

