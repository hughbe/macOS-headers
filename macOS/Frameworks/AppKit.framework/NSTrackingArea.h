//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>

@class NSDictionary;

@interface NSTrackingArea : NSObject <NSCopying, NSCoding>
{
    struct CGRect _rect;
    id _owner;
    NSDictionary *_userInfo;
    unsigned long long _options;
    long long _privateFlags;
    id _reserved;
}

+ (id)_areaSendingMouseEntered;
+ (void)_autoreleaseTrackingTag:(long long)arg1;
+ (void)_releaseTrackingTag:(long long)arg1;
+ (void)_retainTrackingTag:(long long)arg1;
+ (BOOL)_isTrackingAreaObject:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)setGestureBehaviors:(id)arg1;
- (id)gestureBehaviors;
- (id)pressureConfigurations;
- (void)_setPressureConfigurations:(id)arg1;
- (void)_forceInternalMouseExitIfNeeded;
- (void)_sendMouseCancelledFromWindow:(id)arg1;
- (void)_mouseExited:(id)arg1;
- (void)_internalMouseExitedWork;
- (void)_dispatchMouseExited:(id)arg1;
- (void)_mouseEntered:(id)arg1;
- (void)_dispatchMouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_installDelayedRolloverForMouseEnteredEvent:(id)arg1;
- (void)_doWork:(CDUnknownBlockType)arg1;
- (BOOL)_removed;
- (void)_setRemoved:(BOOL)arg1;
- (BOOL)_hasPressureConfigurations;
- (BOOL)_representsGestureRecognizers;
- (void)_setRepresentsGestureRecognizers:(BOOL)arg1;
- (BOOL)_suppressPressureConfiguration;
- (void)_setSuppressPressureConfiguration:(BOOL)arg1;
- (BOOL)_pressureConfigPushedToCG;
- (void)_setPressureConfigPushedToCG:(BOOL)arg1;
- (BOOL)_needsPressureConfigPushedToCG;
- (BOOL)_suppressFirstMouseEntered;
- (void)_setSuppressFirstMouseEntered:(BOOL)arg1;
- (BOOL)_enabled;
- (void)_setEnabled:(BOOL)arg1;
- (BOOL)_installed;
- (void)_setInstalled:(BOOL)arg1;
- (BOOL)_uninstallPending;
- (void)_setUninstallPending:(BOOL)arg1;
- (BOOL)_installPending;
- (void)_setInstallPending:(BOOL)arg1;
@property(readonly) unsigned long long options;
- (void *)_userInfo;
@property(readonly, copy) NSDictionary *userInfo;
@property(readonly) __weak id owner;
- (void)_setRect:(struct CGRect)arg1;
@property(readonly) struct CGRect rect;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRect:(struct CGRect)arg1 options:(unsigned long long)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (id)initWithRect:(struct CGRect)arg1 options:(unsigned long long)arg2 pressureConfigurations:(id)arg3 owner:(id)arg4 userInfo:(id)arg5;

@end

