//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/TLKDescriptionViewDelegate-Protocol.h>

@class NSString, TLKDescriptionView;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate>
{
    BOOL _expanded;
}

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
- (void)didPressFootnoteButton;
- (void)didPressMoreButton;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) TLKDescriptionView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

