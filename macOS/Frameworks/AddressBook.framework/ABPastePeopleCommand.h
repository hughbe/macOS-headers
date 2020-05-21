//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ABCommand.h"

@class ABGroup, NSMutableArray;

@interface ABPastePeopleCommand : ABCommand
{
    NSMutableArray *_people;
    NSMutableArray *_linkedPeople;
    NSMutableArray *_peopleProperties;
    ABGroup *_selectedGroup;
}

- (BOOL)doIt;
- (void)redoIt;
- (void)undoIt;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 addressBook:(id)arg2;

@end

