//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPContactClientProtocol <PPFeedbackAccepting>
- (void)contactNameRecordChangesBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(BOOL))arg5;
- (void)contactNameRecordBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(BOOL))arg5;
- (void)rankedContactsBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(BOOL))arg5;
@end

