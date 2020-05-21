//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSToolbarItemViewer;

__attribute__((visibility("hidden")))
@interface _NSToolbarItemViewerAccessibilityHelper : NSObject
{
    NSToolbarItemViewer *_toolbarItemViewer;
    long long _configuration;
}

+ (id)accessibilityHelperForToolbarItemViewer:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityChildrenAttribute;
- (void)accessibilitySetFocusedAttribute:(id)arg1;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityTitleAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)dealloc;
- (id)initWithToolbarItemViewer:(id)arg1;

@end

