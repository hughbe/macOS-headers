//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSString, NSView, NSViewController;

@interface NSTouchBarItem : NSObject <NSCoding>
{
    NSString *_identifier;
    float _visibilityPriority;
    long long _visibilityCount;
    BOOL _requiresTrueCenterLayout;
}

+ (id)keyPathsForValuesAffectingView;
+ (void)initialize;
+ (void)removeSystemTrayItem:(id)arg1;
+ (void)addSystemTrayItem:(id)arg1;
+ (void)removeTouchIDItem:(id)arg1;
+ (void)addTouchIDItem:(id)arg1;
@property(readonly, getter=isVisible) BOOL visible;
- (id)description;
- (double)preferredZOrder;
- (id)_imageToDisplayForImage:(id)arg1 title:(id)arg2;
- (struct CGSize)_contentClippingSize;
- (void)_itemViewMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2;
- (void)_itemViewMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2 preferredSize:(struct CGSize *)arg3;
- (void)_itemViewMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2 preferredSize:(struct CGSize *)arg3 stretchesContent:(BOOL)arg4;
- (void)_setRequiresTrueCenterLayout:(BOOL)arg1;
- (BOOL)_requiresTrueCenterLayout;
- (long long)_type;
- (unsigned long long)itemPosition;
- (void)setPriority:(float)arg1;
- (float)priority;
@property float visibilityPriority;
@property(readonly) NSViewController *viewController;
@property(readonly) NSView *view;
- (void)dealloc;
@property(readonly, copy) NSString *customizationLabel;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *identifier;
- (id)_playgroundQuickLookView;
@property(readonly) struct CGSize preferredSizeForCustomizationPalette;
- (struct CGSize)fallbackItemSizeForCustomization;
- (id)makeViewForCustomizationPreview;
- (id)makeViewForCustomizationPalette;
- (id)makeViewForCustomization;
- (id)makePressAndHoldTransposerWithSourceFrame:(struct CGRect)arg1 destinationContentView:(id)arg2 frame:(struct CGRect)arg3;
@property(readonly) Class preferredPopoverTransposerClass;
@property(readonly) long long preferredPopoverTransposerPriority;

@end

