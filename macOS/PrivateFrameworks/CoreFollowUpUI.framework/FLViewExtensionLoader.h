//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUp/FLHeadlessExtensionLoader.h>

@class NSViewController;

@interface FLViewExtensionLoader : FLHeadlessExtensionLoader
{
    NSViewController *_extensionViewController;
}

- (void).cxx_destruct;
- (void)_connectContextToSessionWithRequestIdentifier:(id)arg1 remoteController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupRemoteViewControllerWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupSessionWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_setupSessionIfNeeded:(id *)arg1;
- (id)remoteViewController;

@end

