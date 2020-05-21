//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PXGadgetNavigationItem;
@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject
{
    id <PXGadgetNavigationHelperDelegate> _delegate;
    PXGadgetNavigationItem *_pendingNavigationItem;
    NSTimer *_navigationInvalidationTimer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSTimer *navigationInvalidationTimer; // @synthesize navigationInvalidationTimer=_navigationInvalidationTimer;
@property(retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem; // @synthesize pendingNavigationItem=_pendingNavigationItem;
@property(nonatomic) __weak id <PXGadgetNavigationHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_pendingNavigationInvalidationTimerFired:(id)arg1;
- (void)_stopPendingNavigationTimer;
- (BOOL)_navigateToGadget:(id)arg1 animated:(BOOL)arg2 navigationBlock:(CDUnknownBlockType)arg3;
- (void)invalidateAnyPendingNavigation;
- (void)startPendingNavigationTimer;
- (void)navigateIfNeeded;
- (BOOL)navigateToGadgetDeferIfNeeded:(id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
- (BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
- (BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL hasPendingNavigation;
- (BOOL)navigateToDestinationDeferIfNeeded:(id)arg1 animated:(BOOL)arg2 nestedNavigationBlock:(CDUnknownBlockType)arg3;

@end

