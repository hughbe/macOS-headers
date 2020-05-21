//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionReusableView.h>

@class NSString;
@protocol MOAccessibilityChildrenDelegate;

@interface MOPhotosAtlasSupplementaryRow : UXCollectionReusableView
{
    NSString *_uuid;
    id _rowImage;
    BOOL _clearRowImage;
    struct CGRect _contentsRect;
    id <MOAccessibilityChildrenDelegate> _accessibilityDelegate;
    long long _accessibilitySelectedChildIndex;
}

+ (void)clearColorCaches;
+ (id)rowEmptyImage;
+ (struct CGColor *)rowEmptyColor;
- (void).cxx_destruct;
@property long long accessibilitySelectedChildIndex; // @synthesize accessibilitySelectedChildIndex=_accessibilitySelectedChildIndex;
@property(nonatomic) __weak id <MOAccessibilityChildrenDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
- (BOOL)isEmpty;
- (id)rowImage;
- (void)setRowImage:(id)arg1 contentsRect:(struct CGRect)arg2;
- (void)setRowImage:(id)arg1;
- (id)representedElementKind;
- (id)indexPath;
- (void)prepareForRecycling;
- (void)prepareForReuse;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityChildren;

@end

