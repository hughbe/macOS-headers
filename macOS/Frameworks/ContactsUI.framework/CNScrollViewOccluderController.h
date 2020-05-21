//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUIViewRevealer, NSScrollView, NSView;
@protocol CNCancelable;

@interface CNScrollViewOccluderController : NSObject
{
    BOOL _animateOccluderVisibility;
    NSScrollView *_scrollView;
    NSView *_topOccluder;
    NSView *_bottomOccluder;
    CNUIViewRevealer *_viewRevealer;
    id <CNCancelable> _occlusionDidChangeToken;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL animateOccluderVisibility; // @synthesize animateOccluderVisibility=_animateOccluderVisibility;
@property(retain, nonatomic) id <CNCancelable> occlusionDidChangeToken; // @synthesize occlusionDidChangeToken=_occlusionDidChangeToken;
@property(retain, nonatomic) CNUIViewRevealer *viewRevealer; // @synthesize viewRevealer=_viewRevealer;
@property(nonatomic) __weak NSView *bottomOccluder; // @synthesize bottomOccluder=_bottomOccluder;
@property(nonatomic) __weak NSView *topOccluder; // @synthesize topOccluder=_topOccluder;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)adjustOccluders:(id)arg1;
- (void)dealloc;
- (id)makeOcclusionDidChangeObservable;
- (id)initWithScrollView:(id)arg1 topOccluder:(id)arg2 bottomOccluder:(id)arg3 viewRevealer:(id)arg4;

@end

