//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ABBookUndoableCommand.h"

@class ABAddressBook, NSArray, NSString;

@interface ABRemoveMembersCommand : ABBookUndoableCommand
{
    NSString *_groupIdentifier;
    NSArray *_memberIdentifiers;
    ABAddressBook *_addressBook;
    BOOL ignoresGuardianRestrictions;
}

- (void)setIgnoresGuardianRestrictions:(BOOL)arg1;
- (BOOL)ignoresGuardianRestrictions;
- (id)_fetchGroup;
- (id)_fetchMembers;
- (void)_addSubgroups:(id)arg1 toGroup:(id)arg2;
- (void)_addPeople:(id)arg1 toGroup:(id)arg2;
- (void)executeUndo;
- (void)_removeSubgroups:(id)arg1 fromGroup:(id)arg2;
- (void)_removePeople:(id)arg1 fromGroup:(id)arg2;
- (void)execute;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 members:(id)arg2 addressBook:(id)arg3;

@end

