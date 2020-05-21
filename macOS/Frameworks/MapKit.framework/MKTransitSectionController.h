//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, MKTransitSectionPagingFilter, NSDate, NSSet;
@protocol GEOTransitSystem;

__attribute__((visibility("hidden")))
@interface MKTransitSectionController : NSObject
{
    MKMapItem *_mapItem;
    MKTransitSectionPagingFilter *__pagingFilter;
    NSSet *_linesToShow;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfFilteredRows;
    unsigned long long _numberOfFilteredLines;
    BOOL _needsBuildRows;
    id <GEOTransitSystem> _system;
    NSDate *_departureCutoffDate;
    NSDate *_expiredHighFrequencyCutoffDate;
    NSSet *_incidentEntitiesToExclude;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MKTransitSectionPagingFilter *_pagingFilter; // @synthesize _pagingFilter=__pagingFilter;
@property(readonly, nonatomic) unsigned long long numberOfFilteredLines; // @synthesize numberOfFilteredLines=_numberOfFilteredLines;
@property(retain, nonatomic) NSSet *incidentEntitiesToExclude; // @synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude;
@property(retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate; // @synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate;
@property(retain, nonatomic) NSDate *departureCutoffDate; // @synthesize departureCutoffDate=_departureCutoffDate;
@property(readonly, nonatomic) id <GEOTransitSystem> system; // @synthesize system=_system;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (BOOL)_needsBuildRows;
- (id)linesToShow;
- (BOOL)hasFilteredLines;
- (BOOL)hasFilteredRows;
- (unsigned long long)numberOfRows;
- (void)incrementPagingFilter;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)init;

@end

