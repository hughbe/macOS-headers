//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class DetachedTabDraggingImageToWindowTransitionController, NSWindow;

@protocol DetachedTabDraggingImageToWindowTransitionControllerDelegate <NSObject>
- (void)detachedTabDraggingImageToWindowTransitionController:(DetachedTabDraggingImageToWindowTransitionController *)arg1 didFinishTransitionAnimationForWindow:(NSWindow *)arg2;
- (NSWindow *)destinationWindowForDetachedTabDraggingImageToWindowTransitionController:(DetachedTabDraggingImageToWindowTransitionController *)arg1;
@end

