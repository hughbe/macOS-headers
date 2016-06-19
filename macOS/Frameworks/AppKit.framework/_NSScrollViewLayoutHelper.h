//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSScrollView;

__attribute__((visibility("hidden")))
@interface _NSScrollViewLayoutHelper : NSObject
{
    NSScrollView *_scrollView;
    struct CGSize _contentAreaSize;
    struct CGSize _documentMinimumSize;
    BOOL _hScrollerShown;
    BOOL _vScrollerShown;
    BOOL _cornerShown;
    BOOL _contentsExtendUnderInsets;
    struct CGRect _headerFrame;
    struct CGRect _vRulerFrame;
    struct CGRect _hRulerFrame;
    struct CGRect _findBarFrame;
    struct CGRect _contentFrame;
    struct CGRect _insetContentFrame;
    struct CGRect _vScrollerFrame;
    struct CGRect _hScrollerFrame;
    struct CGRect _vLegacyScrollerFrame;
    struct CGRect _hLegacyScrollerFrame;
    struct CGRect _cornerFrame;
    struct NSEdgeInsets _contentViewInsets;
}

@property(readonly) struct NSEdgeInsets contentViewInsets; // @synthesize contentViewInsets=_contentViewInsets;
@property(readonly) struct CGRect cornerFrame; // @synthesize cornerFrame=_cornerFrame;
@property(readonly) struct CGRect hLegacyScrollerFrame; // @synthesize hLegacyScrollerFrame=_hLegacyScrollerFrame;
@property(readonly) struct CGRect vLegacyScrollerFrame; // @synthesize vLegacyScrollerFrame=_vLegacyScrollerFrame;
@property(readonly) struct CGRect hScrollerFrame; // @synthesize hScrollerFrame=_hScrollerFrame;
@property(readonly) struct CGRect vScrollerFrame; // @synthesize vScrollerFrame=_vScrollerFrame;
@property(readonly) struct CGRect insetContentFrame; // @synthesize insetContentFrame=_insetContentFrame;
@property(readonly) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(readonly) struct CGRect findBarFrame; // @synthesize findBarFrame=_findBarFrame;
@property(readonly) struct CGRect hRulerFrame; // @synthesize hRulerFrame=_hRulerFrame;
@property(readonly) struct CGRect vRulerFrame; // @synthesize vRulerFrame=_vRulerFrame;
@property(readonly) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(readonly) BOOL contentsExtendUnderInsets; // @synthesize contentsExtendUnderInsets=_contentsExtendUnderInsets;
@property(readonly) BOOL cornerShown; // @synthesize cornerShown=_cornerShown;
@property(readonly) BOOL vScrollerShown; // @synthesize vScrollerShown=_vScrollerShown;
@property(readonly) BOOL hScrollerShown; // @synthesize hScrollerShown=_hScrollerShown;
@property(readonly) struct CGSize documentMinimumSize; // @synthesize documentMinimumSize=_documentMinimumSize;
- (void)updateLayoutWithMinimumDocumentFrameSize:(struct CGSize)arg1;
- (id)initWithScrollView:(id)arg1;

@end

