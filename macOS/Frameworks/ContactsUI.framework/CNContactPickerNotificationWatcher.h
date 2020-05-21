//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, ABGroupListNotificationHandler, ABPersonListUIReflector, NSMutableArray;

@interface CNContactPickerNotificationWatcher : NSObject
{
    ABGroupListNotificationHandler *_groupListHandler;
    ABPersonListUIReflector *_personListReflector;
    ABAddressBook *_addressBook;
    NSMutableArray *_observers;
}

- (void).cxx_destruct;
- (void)accountConfigurationDidChange:(id)arg1;
- (void)accountRepositoryDidChange:(id)arg1;
- (void)addressBookChangedExternally:(id)arg1;
- (BOOL)isNotificationFromDirectorySearch:(id)arg1;
- (BOOL)shouldProcessNotification:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)registerForLocalNotifications;
- (void)registerForExternalNotifications;
- (void)dealloc;
- (id)initWithGroupListHandler:(id)arg1 personListReflector:(id)arg2 addressBook:(id)arg3;

@end

