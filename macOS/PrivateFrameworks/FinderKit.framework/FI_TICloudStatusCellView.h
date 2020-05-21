//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_TListBaseCellView.h>

#import <FinderKit/TICloudBadgeButtonContainer-Protocol.h>
#import <FinderKit/TInlineProgressViewContainer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TICloudStatusCellView : FI_TListBaseCellView <TICloudBadgeButtonContainer, TInlineProgressViewContainer>
{
    struct TNSRef<NSLayoutGuide, void> _badgeViewLayoutGuide;
    struct TNSRef<FI_TICloudBadgeButton, void> _iCloudBadgeImageButton;
    struct TNSRef<FI_TInlineProgressView, void> _progressView;
    struct TICloudStateCoordinator _iCloudStateCoordinator;
    struct CGSize _shortTitlePreferredSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize shortTitlePreferredSize; // @synthesize shortTitlePreferredSize=_shortTitlePreferredSize;
- (void)updateTitleTextField;
- (void)updateProgressView;
- (void)setProgressStatus:(const struct TNodeProgressStatus *)arg1;
- (void)setICloudBadge:(int)arg1 toolTip:(const struct TString *)arg2 clickHandler:(const function_b1fce659 *)arg3;
- (void)setDimmed:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setTitleFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

