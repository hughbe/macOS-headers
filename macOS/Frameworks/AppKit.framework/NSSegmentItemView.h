//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSSegmentItem, NSSegmentItemLabelView, NSSegmentedCell;

__attribute__((visibility("hidden")))
@interface NSSegmentItemView : NSView
{
    NSSegmentedCell *_parentCell;
    NSSegmentItem *_segmentItemData;
    NSSegmentItemLabelView *_labelView;
    long long _tag;
    struct CGRect _contentRect;
    struct CGRect _imageRect;
    struct CGRect _labelRect;
    BOOL _drawContent;
}

@property struct CGRect labelRect; // @synthesize labelRect=_labelRect;
@property struct CGRect imageRect; // @synthesize imageRect=_imageRect;
@property struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property long long tag; // @synthesize tag=_tag;
@property(retain) NSSegmentItemLabelView *labelView; // @synthesize labelView=_labelView;
@property NSSegmentItem *segmentItemData; // @synthesize segmentItemData=_segmentItemData;
@property BOOL drawContent; // @synthesize drawContent=_drawContent;
@property NSSegmentedCell *parentCell; // @synthesize parentCell=_parentCell;
- (BOOL)canSmoothFontsInFrame:(struct CGRect)arg1 forLayerBackedView:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawImageWithDirtyRect:(struct CGRect)arg1 imageState:(unsigned long long)arg2 backgroundStyle:(long long)arg3;
- (void)dealloc;
- (id)accessibilityChildrenAttribute;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

