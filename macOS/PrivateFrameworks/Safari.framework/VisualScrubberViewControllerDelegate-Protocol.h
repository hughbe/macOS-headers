//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class VisualScrubberViewController;

@protocol VisualScrubberViewControllerDelegate <NSObject>

@optional
- (void)visualScrubberViewController:(VisualScrubberViewController *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)visualScrubberViewControllerDidEndInteractionWithScrubber:(VisualScrubberViewController *)arg1;
- (void)visualScrubberViewControllerDidBeginInteractionWithScrubber:(VisualScrubberViewController *)arg1;
@end

