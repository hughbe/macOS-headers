//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface SMAnalyticsManager : NSObject
{
    BOOL _failedToReceiveEOAMarker;
    NSNumber *_hadAtleastOneBrokenSymlink;
    NSNumber *_finalMigrationResult;
    NSString *_fatalErrorDescription;
    NSMutableDictionary *_events;
    NSMutableDictionary *_yaaCallbackErrors;
    NSString *_yaaAtSourceErrorDescription;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSString *yaaAtSourceErrorDescription; // @synthesize yaaAtSourceErrorDescription=_yaaAtSourceErrorDescription;
@property(retain, nonatomic) NSMutableDictionary *yaaCallbackErrors; // @synthesize yaaCallbackErrors=_yaaCallbackErrors;
@property(retain, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
@property BOOL failedToReceiveEOAMarker; // @synthesize failedToReceiveEOAMarker=_failedToReceiveEOAMarker;
@property(retain) NSString *fatalErrorDescription; // @synthesize fatalErrorDescription=_fatalErrorDescription;
@property(retain) NSNumber *finalMigrationResult; // @synthesize finalMigrationResult=_finalMigrationResult;
@property(retain) NSNumber *hadAtleastOneBrokenSymlink; // @synthesize hadAtleastOneBrokenSymlink=_hadAtleastOneBrokenSymlink;
- (void)organizeAnalyticsData;
- (void)reportAllPendingAnalytics;
- (void)traceODTokenIssuingSuccess:(BOOL)arg1 afterRetries:(unsigned long long)arg2;
- (BOOL)traceYaaAtDestinationError:(id)arg1 forCallback:(id)arg2;
- (BOOL)traceYaaAtSourceErrorDescription:(id)arg1;
- (id)init;

@end

