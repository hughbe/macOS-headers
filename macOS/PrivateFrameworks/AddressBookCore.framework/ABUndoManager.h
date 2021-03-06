//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUndoManager.h>

@class NSMutableArray;

@interface ABUndoManager : NSUndoManager
{
    BOOL _inCreationUndoGrouping;
    BOOL _checkpointSet;
    NSMutableArray *_commandTargetsSinceCheckpoint;
}

+ (id)sharedInstance;
+ (id)makeUndoManager;
+ (void)initialize;
- (void)removeCommandsSinceCheckpoint;
- (void)clearCheckpoint;
- (void)setCheckpoint;
- (void)setNonCreationActionName:(id)arg1;
- (void)endCreationUndoGrouping;
- (void)beginCreationUndoGrouping;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)dealloc;
- (id)init;

@end

