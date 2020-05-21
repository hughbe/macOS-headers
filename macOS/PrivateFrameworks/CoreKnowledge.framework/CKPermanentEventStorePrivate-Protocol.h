//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKKnowledgeStore, NSDate, NSDictionary, NSString;

@protocol CKPermanentEventStorePrivate
- (void)deleteEventWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (BOOL)deleteEventWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (void)setTotalDuration:(double)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setLastDuration:(double)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setFrequency:(long long)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setLastSeen:(NSDate *)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setFirstSeen:(NSDate *)arg1 forEventWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSDictionary *)historicEventsAndReturnError:(id *)arg1;
- (void)historicEventsWithCompletionHandler:(void (^)(NSError *, NSDictionary *))arg1;
@property(nonatomic, readonly) CKKnowledgeStore *backingStore;
@end

