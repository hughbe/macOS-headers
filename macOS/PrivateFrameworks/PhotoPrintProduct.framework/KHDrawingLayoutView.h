//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXView.h>

@class KHLayout;

@interface KHDrawingLayoutView : UXView
{
    BOOL _backgroundDisabled;
    KHLayout *_layoutObject;
    double _gutterOverlap;
}

- (void).cxx_destruct;
@property BOOL backgroundDisabled; // @synthesize backgroundDisabled=_backgroundDisabled;
@property double gutterOverlap; // @synthesize gutterOverlap=_gutterOverlap;
@property(retain, nonatomic) KHLayout *layoutObject; // @synthesize layoutObject=_layoutObject;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

