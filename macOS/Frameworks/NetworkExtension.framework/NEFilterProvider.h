//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEProvider.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEFilterProviderConfiguration, NSString;

@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling>
{
    NEFilterProviderConfiguration *_filterConfiguration;
}

+ (id)descriptionForAction:(long long)arg1;
- (void).cxx_destruct;
@property(retain) NEFilterProviderConfiguration *filterConfiguration; // @synthesize filterConfiguration=_filterConfiguration;
- (void)handleReport:(id)arg1;
- (void)stopFilterWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFilterWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

