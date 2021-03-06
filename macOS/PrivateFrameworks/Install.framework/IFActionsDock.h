//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IFActionsDock : NSObject
{
    NSArray *_dockItems;
    unsigned int _port;
    int _tid;
    BOOL _connected;
}

- (BOOL)removeDockItem:(id)arg1;
- (id)getDockItems;
- (BOOL)moveDockItem:(id)arg1 toIndex:(id)arg2;
- (BOOL)addDockItem:(id)arg1 atIndex:(id)arg2;
- (void)close;
- (BOOL)connect;
- (void)dealloc;
- (id)init;
- (id)dockPlistPathForUser:(id)arg1;
- (BOOL)legacyRemoveDockItem:(unsigned int)arg1;
- (BOOL)legacyMoveDockItem:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)legacyGetDockItems;
- (BOOL)legacyAddDockItem:(id)arg1 atIndex:(id)arg2;

@end

