//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSplitView.h>

__attribute__((visibility("hidden")))
@interface FI_TSplitView : NSSplitView
{
    double _dividerThickness;
}

- (void)_resetUserPreferredThicknessAfterUserResizeWithDelay;
- (BOOL)isOpaque;
- (void)viewDidEndLiveResize;
- (void)animatePosition:(double)arg1 ofDividerAtIndex:(unsigned long long)arg2;
- (double)positionOfDividerAtIndex:(unsigned long long)arg1;
- (struct CGSize)sizeOfSubviewAtIndex:(unsigned long long)arg1;
- (id)subviewAtIndex:(unsigned long long)arg1;
@property double dividerThickness; // @dynamic dividerThickness;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

