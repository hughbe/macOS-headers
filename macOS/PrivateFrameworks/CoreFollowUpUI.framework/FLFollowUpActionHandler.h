//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUp/FLHeadlessActionHandler.h>

#import <CoreFollowUpUI/FLExtensionHostContextInterface-Protocol.h>

@class FLViewExtensionLoader, NSString, NSViewController;

@interface FLFollowUpActionHandler : FLHeadlessActionHandler <FLExtensionHostContextInterface>
{
    FLViewExtensionLoader *_extensionLoader;
    NSViewController *_remoteViewController;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _extensionRequestedViewControllerPresentation;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType extensionRequestedViewControllerPresentation; // @synthesize extensionRequestedViewControllerPresentation=_extensionRequestedViewControllerPresentation;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)extensionDidFinish;
- (void)setDisplayImage:(id)arg1;
- (void)handleExtensionBasedAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_extensionLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

