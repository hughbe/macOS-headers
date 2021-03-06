//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSUICollectionViewCell.h>

@class CALayer, GKHairlineView, GKStaticRenderContentView, NSArray, NSLayoutConstraint, NSView;

@interface GKCollectionViewCell : NSUICollectionViewCell
{
    BOOL _shouldDisplaySwipeToEditAccessories;
    double _contentOriginX;
    BOOL _doesAbutLeftEdge;
    id _representedItem;
    NSView *_staticContentView;
    NSArray *_editActions;
    double _editingContentOriginX;
    GKStaticRenderContentView *_contentRenderView;
    CALayer *_leftGradientMask;
    GKHairlineView *_topHairline;
    GKHairlineView *_bottomHairline;
    NSArray *_editActionsConstraints;
    NSArray *_hairlineConstraints;
    NSLayoutConstraint *_contentLeftConstraint;
    double _leadingMargin;
    double _trailingMargin;
}

+ (void)registerCellClassesWithCollectionView:(id)arg1;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(retain, nonatomic) NSLayoutConstraint *contentLeftConstraint; // @synthesize contentLeftConstraint=_contentLeftConstraint;
@property(retain, nonatomic) NSArray *hairlineConstraints; // @synthesize hairlineConstraints=_hairlineConstraints;
@property(retain, nonatomic) NSArray *editActionsConstraints; // @synthesize editActionsConstraints=_editActionsConstraints;
@property(retain, nonatomic) GKHairlineView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(retain, nonatomic) GKHairlineView *topHairline; // @synthesize topHairline=_topHairline;
@property(nonatomic) BOOL doesAbutLeftEdge; // @synthesize doesAbutLeftEdge=_doesAbutLeftEdge;
@property(retain, nonatomic) CALayer *leftGradientMask; // @synthesize leftGradientMask=_leftGradientMask;
@property(retain, nonatomic) GKStaticRenderContentView *contentRenderView; // @synthesize contentRenderView=_contentRenderView;
@property(nonatomic) double editingContentOriginX; // @synthesize editingContentOriginX=_editingContentOriginX;
@property(retain, nonatomic) NSArray *editActions; // @synthesize editActions=_editActions;
@property(retain, nonatomic) NSView *staticContentView; // @synthesize staticContentView=_staticContentView;
@property(retain, nonatomic) id representedItem; // @synthesize representedItem=_representedItem;
- (void)configureContextMenu:(id)arg1;
- (void)shutActionPaneAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetEditingContentOrigin;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateConstraints;
- (void)didUpdateModel;
- (void)setNeedsDisplay;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setShouldDisplaySwipeToEditAccessories:(BOOL)arg1;
- (void)applyGradientMaskIfNeeded;
- (void)prepareHairlineConstraintsIfNeeded;
@property(readonly, nonatomic) NSView *interactiveContentView;
@property(readonly, nonatomic) struct CGRect alignmentRectForText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

