//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface ToolbarDownloadsButtonProgressBar : NSView
{
    BOOL _indeterminate;
    float _progress;
}

@property(nonatomic, getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end

