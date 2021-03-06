//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class ISDConflictManager, NSMutableArray, NSSet;

@interface ISDConflictChangeEnumerator : NSEnumerator
{
    NSEnumerator *_conflictEnumerator;
    NSMutableArray *_changeQueue;
    unsigned int _generation;
    ISDConflictManager *_conflictManager;
    NSSet *_entityNames;
}

- (id)nextObject;
- (void)_processConflict:(id)arg1;
- (void)dealloc;
- (id)initWithConflictEnumerator:(id)arg1 conflictManager:(id)arg2 entityNames:(id)arg3 generation:(unsigned int)arg4;

@end

