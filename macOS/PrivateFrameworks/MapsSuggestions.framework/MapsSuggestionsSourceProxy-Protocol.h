//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@class CNContact, GEOMapItemStorage, NSData;

@protocol MapsSuggestionsSourceProxy <NSObject>
- (void)updateGraphWithHandler:(void (^)(BOOL))arg1;
- (void)feedbackForContact:(CNContact *)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(GEOMapItemStorage *)arg1 action:(long long)arg2;
- (void)feedbackForEntryData:(NSData *)arg1 action:(long long)arg2;
- (void)removeEntryData:(NSData *)arg1 behavior:(long long)arg2 handler:(void (^)(void))arg3;
- (void)forceEarlyUpdateForType:(long long)arg1 handler:(void (^)(void))arg2;
- (void)stopMonitoringWithHandler:(void (^)(void))arg1;
- (void)startMonitoringWithHandler:(void (^)(void))arg1;
@end

