//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class IASMagicPocketView;

@interface IASMagicPocketScrollView : NSScrollView
{
    BOOL showsPocketOnTop;
    BOOL showsPocketOnBottom;
    BOOL showsPocketOnLeft;
    BOOL showsPocketOnRight;
    BOOL pocketsAreDynamic;
    BOOL moreContentLeft;
    BOOL moreContentRight;
    BOOL moreContentUp;
    BOOL moreContentDown;
    BOOL handleBoundsOrFrameChangePending;
    IASMagicPocketView *topPocketView;
    IASMagicPocketView *bottomPocketView;
    IASMagicPocketView *leftPocketView;
    IASMagicPocketView *rightPocketView;
    id contentViewBoundsChangeNotificationToken;
    id documentViewFrameChangeNotificationToken;
}

- (void).cxx_destruct;
@property BOOL handleBoundsOrFrameChangePending; // @synthesize handleBoundsOrFrameChangePending;
@property(retain) id documentViewFrameChangeNotificationToken; // @synthesize documentViewFrameChangeNotificationToken;
@property(retain) id contentViewBoundsChangeNotificationToken; // @synthesize contentViewBoundsChangeNotificationToken;
@property BOOL moreContentDown; // @synthesize moreContentDown;
@property BOOL moreContentUp; // @synthesize moreContentUp;
@property BOOL moreContentRight; // @synthesize moreContentRight;
@property BOOL moreContentLeft; // @synthesize moreContentLeft;
@property(retain) IASMagicPocketView *rightPocketView; // @synthesize rightPocketView;
@property(retain) IASMagicPocketView *leftPocketView; // @synthesize leftPocketView;
@property(retain) IASMagicPocketView *bottomPocketView; // @synthesize bottomPocketView;
@property(retain) IASMagicPocketView *topPocketView; // @synthesize topPocketView;
@property(nonatomic) BOOL pocketsAreDynamic; // @synthesize pocketsAreDynamic;
@property(nonatomic) BOOL showsPocketOnRight; // @synthesize showsPocketOnRight;
@property(nonatomic) BOOL showsPocketOnLeft; // @synthesize showsPocketOnLeft;
@property(nonatomic) BOOL showsPocketOnBottom; // @synthesize showsPocketOnBottom;
@property(nonatomic) BOOL showsPocketOnTop; // @synthesize showsPocketOnTop;
- (void)animateScrollToPoint:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tile;
- (void)_defferedHandleBoundsOrFrameChanged;
- (void)animatePocket:(id)arg1 in:(BOOL)arg2;
- (void)_handleBoundsOrFrameChanged;
- (void)_installNotificationObserversIfNecessary;
- (void)setPocket:(id)arg1 toState:(BOOL)arg2;
- (void)viewDidMoveToWindow;
- (void)removeContentObserversIfNeeded;
- (void)commonInit;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

