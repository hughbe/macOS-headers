//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@class NSSet;

@interface EKPredicate : NSPredicate
{
    BOOL _skipSorting;
    NSSet *_calendarIdentifiers;
    CDUnknownBlockType _sortComparator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sortComparator; // @synthesize sortComparator=_sortComparator;
@property(nonatomic) BOOL skipSorting; // @synthesize skipSorting=_skipSorting;
@property(retain, nonatomic) NSSet *calendarIdentifiers; // @synthesize calendarIdentifiers=_calendarIdentifiers;
- (id)fastPathResultWithStore:(id)arg1;
- (BOOL)hasFastPathWithStore:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)description;

@end

