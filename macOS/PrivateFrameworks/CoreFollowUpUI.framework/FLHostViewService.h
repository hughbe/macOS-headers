//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

#import <CoreFollowUpUI/FLExtensionViewServiceInterface-Protocol.h>

@class NSString, NSWindow;

@interface FLHostViewService : NSServiceViewController <FLExtensionViewServiceInterface>
{
    NSWindow *_window;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)connectToContextWithSessionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadView;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

