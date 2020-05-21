//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFChooseFromListIntentHandling-Protocol.h>

@class NSString;

@interface WFChooseFromListIntentHandler : NSObject <WFChooseFromListIntentHandling>
{
}

- (void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleChooseFromList:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

