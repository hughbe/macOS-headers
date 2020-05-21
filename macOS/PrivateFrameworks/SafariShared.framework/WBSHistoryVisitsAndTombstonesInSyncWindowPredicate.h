//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryTombstonePredicate-Protocol.h>
#import <SafariShared/WBSHistoryVisitPredicate-Protocol.h>

@class NSString;

@interface WBSHistoryVisitsAndTombstonesInSyncWindowPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate>
{
    double _referenceDate;
    long long _lastSyncedGeneration;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *description;
- (BOOL)evaluateServiceTombstone:(id)arg1;
- (BOOL)evaluateTombstone:(id)arg1;
- (BOOL)evaluateServiceVisit:(id)arg1;
- (BOOL)evaluateVisit:(id)arg1;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyncWindow:(double)arg1 lastSyncedGeneration:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

