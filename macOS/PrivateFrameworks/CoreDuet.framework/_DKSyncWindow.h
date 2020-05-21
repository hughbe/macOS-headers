//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSDate, _DKEvent;

@interface _DKSyncWindow : NSObject <NSCopying>
{
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)linearDescriptionOfSortedWindows:(id)arg1;
+ (id)windowsFromDictionaryArray:(id)arg1;
+ (id)dictionaryArrayFromWindows:(id)arg1;
+ (id)completedWindowsFromWindows:(id)arg1 firstEvent:(id)arg2 lastEvent:(id)arg3 fetchOrder:(long long)arg4 fillOrder:(unsigned long long)arg5 hitLimit:(BOOL)arg6;
+ (id)completedWindowsWithSortedEvents:(id)arg1 windows:(id)arg2 fetchOrder:(long long)arg3 fillOrder:(unsigned long long)arg4 hitLimit:(BOOL)arg5;
+ (id)unionOfSortedSyncWindows:(id)arg1;
+ (id)redundantWindowsFromSortedWindows:(id)arg1 olderThanDate:(id)arg2;
+ (id)windowsMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)lastWindowMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)lastWindowMissingFromSortedNormalizedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3;
+ (id)windowsThatOverlapWithWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3;
+ (id)sortedUnionOfSortedWindows:(id)arg1 andSortedWindows:(id)arg2;
+ (id)syncWindowWithStartDate:(id)arg1 endDate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) _DKEvent *event; // @synthesize event=_event;
- (id)debugDescription;
- (id)description;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToWindow:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)unionWithSyncWindow:(id)arg1;
- (id)initWithEvent:(id)arg1;

@end

