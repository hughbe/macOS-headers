//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/_NSConstraintIndicatorView.h>

__attribute__((visibility("hidden")))
@interface _NSSizeIndicatorView : _NSConstraintIndicatorView
{
    struct CGRect rect;
    BOOL isHorizontal;
}

- (id)constraintDescription;
- (void)drawRect:(struct CGRect)arg1 asBorder:(BOOL)arg2 withLineThickness:(double)arg3 forceColor:(id)arg4;
- (id)initWithRect:(struct CGRect)arg1 isHorizontal:(BOOL)arg2;

@end

