//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class ICManagedObjectContextUpdater, NSManagedObjectID;

@protocol ICManagedObjectContextUpdaterDelegate <NSObject>
- (void)managedObjectContextUpdater:(ICManagedObjectContextUpdater *)arg1 objectDidChange:(NSManagedObjectID *)arg2;
@end

