//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneLibrary/NSObject-Protocol.h>

@class NSString;

@protocol TLServiceAgentInterface <NSObject>
- (void)setCurrentToneIdentifier:(NSString *)arg1 keyedByTopic:(NSString *)arg2 forPreferenceKey:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)retrieveCurrentTonePreferencesWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
@end

