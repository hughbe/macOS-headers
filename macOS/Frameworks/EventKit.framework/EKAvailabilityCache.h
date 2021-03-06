//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EKAvailabilityCache : NSObject
{
    BOOL _sourceIsInvalid;
    NSString *_accountID;
    BOOL _sourceSupportsAvailabilityRequests;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_addressesToCachedSpanRanges;
    NSMutableDictionary *_ignoredEventIDsToAddressBasedCaches;
    unsigned long long _nextRequestID;
    unsigned long long _cancelledID;
}

+ (void)_logRequestElapsedTime:(double)arg1 forNumberOfAddresses:(unsigned long long)arg2;
+ (long long)_convertType:(int)arg1;
+ (id)_generateEventKitSpansFromPersistenceSpans:(id)arg1;
+ (BOOL)_isValidStartDate:(id)arg1 endDate:(id)arg2;
- (void).cxx_destruct;
- (id)_dictionaryForIgnoredEventID:(id)arg1;
- (void)_handleResults:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2 ignoredEventID:(id)arg3;
- (void)cancelAvailabilityRequestWithID:(id)arg1;
- (id)cachedAvailabilityInDateRange:(id)arg1 ignoredEventID:(id)arg2 addresses:(id)arg3;
- (id)requestAvailabilityBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (BOOL)_validateRequestStartDate:(id)arg1 endDate:(id)arg2 addresses:(id)arg3 error:(id *)arg4;
- (id)_cachedSpanResultsBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4;
- (id)description;
- (id)initWithSource:(id)arg1;
- (id)init;

@end

