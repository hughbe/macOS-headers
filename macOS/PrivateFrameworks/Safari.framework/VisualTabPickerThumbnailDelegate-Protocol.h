//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class VisualTabPickerThumbnailView;

@protocol VisualTabPickerThumbnailDelegate <NSObject>
- (void)didToggleMuteButtonInVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (void)didCloseVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (void)didSelectVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
- (BOOL)canCloseTabInVisualTabPickerThumbnailView:(VisualTabPickerThumbnailView *)arg1;
@end

