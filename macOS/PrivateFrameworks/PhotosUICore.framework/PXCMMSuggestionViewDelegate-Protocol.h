//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSMenu, PXCMMSuggestionView;

@protocol PXCMMSuggestionViewDelegate <NSObject>
- (NSMenu *)contextMenuForSuggestionView:(PXCMMSuggestionView *)arg1;
- (void)presentDetailViewForSuggestionView:(PXCMMSuggestionView *)arg1 animated:(BOOL)arg2;

@optional
- (void)suggestionViewSizeThatFitsDidChange:(PXCMMSuggestionView *)arg1;
@end

