//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPClientStore-Protocol.h>
#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSString, PPClientFeedbackHelper, PPXPCClientHelper;

@interface PPQuickTypeBroker : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPXPCClientHelper *_clientHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hibernateWithCompletion:(CDUnknownBlockType)arg1;
- (void)warmUpWithCompletion:(CDUnknownBlockType)arg1;
- (void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxy;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;

@end

