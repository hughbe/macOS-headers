//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryStreamedVisitPredicate-Protocol.h>
#import <SafariShared/WBSHistoryVisitPredicate-Protocol.h>

@class NSDictionary, NSString;

@interface WBSHistoryVisitsMatchingTimesPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryStreamedVisitPredicate>
{
    NSDictionary *_itemVisitTimeMap;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)evaluateHistoryStreamedVisit:(const struct _HistoryStreamedVisit *)arg1;
- (BOOL)evaluateServiceVisit:(id)arg1;
- (BOOL)evaluateVisit:(id)arg1;
- (BOOL)_evaluateVisitWithItemID:(long long)arg1 visitTime:(double)arg2;
- (id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCloudVisitIdentifiers:(id)arg1;
- (id)initWithItemVisitTimeMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

