//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Collaboration/NSTableViewDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface SidebarDataSource : NSObject <NSTableViewDataSource>
{
    NSMutableArray *_sidebarItems;
    unsigned long long _usersGroupsState;
    BOOL _showsNetworkUsers;
    BOOL _showsNetworkGroups;
    BOOL _showsAddressBook;
    BOOL _showsAddressBookGroups;
    NSArray *_addressBookGroups;
}

- (id)objectAtIndex:(unsigned long long)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setAddressBookGroups:(id)arg1;
- (BOOL)showsAddressBookGroups;
- (void)setShowsAddressBookGroups:(BOOL)arg1;
- (BOOL)showsAddressBook;
- (void)setShowsAddressBook:(BOOL)arg1;
- (BOOL)showsNetworkGroups;
- (void)setShowsNetworkGroups:(BOOL)arg1;
- (BOOL)showsNetworkUsers;
- (void)setShowsNetworkUsers:(BOOL)arg1;
- (unsigned long long)usersGroups;
- (void)setUsersGroups:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)updateSidebar;
- (BOOL)networkDirectoryServer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

