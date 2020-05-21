//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXGSpriteIndexReferencing-Protocol.h>

@class NSArray, NSDate, NSString, PXGLayout;
@protocol PXGAnchorDelegate;

@interface PXGAnchor : NSObject <PXGSpriteIndexReferencing, PXGDiagnosticsProvider>
{
    struct {
        char visibleRectOriginForProposedVisibleRectForLayout;
    } _delegateRespondsTo;
    BOOL _needsUpdate;
    BOOL _autoInvalidated;
    id <PXGAnchorDelegate> _delegate;
    id _context;
    PXGLayout *_layout;
    long long _type;
    long long _priority;
    NSArray *_spriteReferences;
    NSArray *_spriteRects;
    unsigned long long _referencingOptions;
    unsigned long long _edges;
    unsigned long long _scrollPosition;
    NSDate *_date;
    NSArray *_constraints;
    CDUnknownBlockType _customOffset;
    struct CGSize _contentSize;
    struct CGRect _visibleRect;
    struct NSEdgeInsets _padding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAutoInvalidated) BOOL autoInvalidated; // @synthesize autoInvalidated=_autoInvalidated;
@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(copy, nonatomic) CDUnknownBlockType customOffset; // @synthesize customOffset=_customOffset;
@property(copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
@property(nonatomic) unsigned long long referencingOptions; // @synthesize referencingOptions=_referencingOptions;
@property(copy, nonatomic) NSArray *spriteRects; // @synthesize spriteRects=_spriteRects;
@property(copy, nonatomic) NSArray *spriteReferences; // @synthesize spriteReferences=_spriteReferences;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXGAnchorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (void)_enumerateSpriteConstraintsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSpritesWithEnumerationOptions:(unsigned long long)arg1 referencingOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)copyWithLayout:(id)arg1;
- (void)enumerateAllSpriteReferencesUsingBlock:(CDUnknownBlockType)arg1;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
@property(readonly, nonatomic) BOOL isScrollingAnimationAnchor;
- (unsigned int)anchoredSpriteIndexInLayout:(id)arg1;
@property(readonly, nonatomic) BOOL shouldFaultInContentAtAnchoredContentEdges;
@property(readonly, nonatomic) unsigned long long anchoredContentEdges;
- (struct CGRect)adjustVisibleRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL canBeReused;
- (id)autoInvalidate;
- (void)invalidate;
@property(readonly, copy) NSString *description;
- (id)initWithLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

