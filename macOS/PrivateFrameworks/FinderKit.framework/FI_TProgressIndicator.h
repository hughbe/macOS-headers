//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSProgressIndicator.h>

__attribute__((visibility("hidden")))
@interface FI_TProgressIndicator : NSProgressIndicator
{
    _Bool _animateWhenIndeterminate;
}

@property(nonatomic) _Bool animateWhenIndeterminate; // @synthesize animateWhenIndeterminate=_animateWhenIndeterminate;
- (void)viewDidMoveToWindow;
- (void)setIndeterminate:(BOOL)arg1;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

