//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/_NSValueBinderPlugin.h>

@class NSDecimalNumber;

__attribute__((visibility("hidden")))
@interface _NSTextFieldPlugin : _NSValueBinderPlugin
{
    NSDecimalNumber *_originalMinValue;
    NSDecimalNumber *_originalMaxValue;
}

- (id)objectMechanismsRequired;
- (id)editingColorAdjustableObject:(id)arg1;
- (BOOL)acceptsStyleChanges;
- (BOOL)needsDelegate;
- (BOOL)updateCellOrControl:(id)arg1 forMaxValue:(id)arg2;
- (BOOL)updateCellOrControl:(id)arg1 forMinValue:(id)arg2;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (void)storeMin:(BOOL)arg1 andMax:(BOOL)arg2 ofObject:(id)arg3;
- (BOOL)canSupportMinAndMaxForObject:(id)arg1;
- (BOOL)canIgnoreSettingMinAndMaxForObject:(id)arg1;
- (BOOL)conditionalBehaviorOffByDefault:(id)arg1;
- (Class)_valueClass:(id)arg1;
- (void)dealloc;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

@end

