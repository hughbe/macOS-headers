//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSButton, _MKPlaceViewController;

__attribute__((visibility("hidden")))
@interface MKInfoCardReportAProblemController : NSObject
{
    NSArray *_reportAProblemControls;
    NSButton *_bookmarksContainerReportAProblemButton;
    NSButton *_dropPinContainerReportAProblemButton;
    NSButton *_RAPContainerReportAProblemButton;
    BOOL _showReportAProblem;
    _MKPlaceViewController *infoCardController;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showReportAProblem; // @synthesize showReportAProblem=_showReportAProblem;
@property(nonatomic) __weak _MKPlaceViewController *infoCardController; // @synthesize infoCardController;
- (BOOL)isReportAProblemAvailable;
- (void)reportAProblem:(id)arg1;
- (void)awakeFromNib;

@end

