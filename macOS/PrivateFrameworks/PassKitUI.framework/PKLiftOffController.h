//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView, NSWindow, PKPass, PKPassViewerViewController;

@interface PKLiftOffController : NSObject
{
    PKPass *_pass;
    PKPassViewerViewController *_viewController;
    NSWindow *_flyingWindow;
    NSView *_flyingPassView;
    NSWindow *_shadowWindow;
}

+ (id)_controllers;
- (void).cxx_destruct;
- (void)liftOffWithCompletionBlock:(CDUnknownBlockType)arg1 closeHostWindow:(BOOL)arg2;
- (void)dealloc;
- (id)initWithPass:(id)arg1 inViewController:(id)arg2;

@end

