//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_TTouchBarViewController.h>

__attribute__((visibility("hidden")))
@interface FI_TTouchBarScrollingStackViewController : FI_TTouchBarViewController
{
    struct TFENodeVector _targetNodes;
    struct CGPoint _cachedScrollPosition;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)setTargetNodes:(const struct TFENodeVector *)arg1;
- (const struct TFENodeVector *)targetNodes;
- (id)makeTouchBarView;
- (void)initCommon;

@end

