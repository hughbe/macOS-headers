//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMDSpamController : NSObject
{
    NSMutableDictionary *_chatGUIDToSpamCheckTimerMap;
    NSMutableDictionary *_chatGUIDToCountMap;
    double _spamExtensionCutoffTime;
}

+ (id)sharedInstance;
@property(nonatomic) double spamExtensionCutoffTime; // @synthesize spamExtensionCutoffTime=_spamExtensionCutoffTime;
@property(retain) NSMutableDictionary *chatGUIDToCountMap; // @synthesize chatGUIDToCountMap=_chatGUIDToCountMap;
@property(retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap; // @synthesize chatGUIDToSpamCheckTimerMap=_chatGUIDToSpamCheckTimerMap;
- (void)checkForSpamWithExtensionInChat:(id)arg1 forMessageBody:(id)arg2 sender:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (BOOL)shouldCheckForSpamWithExtensionInChat:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3;
- (void)detectSpam:(id)arg1 chatGUID:(id)arg2;
- (BOOL)_isDisabled;
- (id)chatRegistry;
- (void)_spamCheckTimerFired:(id)arg1;
- (void)_updateSpamCheckTimerWithInterval:(double)arg1 forChatGUID:(id)arg2;
- (void)__queryServerForID:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;

@end

