//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class NSMutableArray, TLKGridLayoutManager, TLKTableRow;

@interface TLKGridRowView : TLKView
{
    BOOL _needsSizingPass;
    TLKGridLayoutManager *_manager;
    TLKTableRow *_tableRow;
    NSMutableArray *_labels;
    NSMutableArray *_imageViews;
    NSMutableArray *_currentListOfViews;
    unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
    unsigned long long _indexOfFirstTrailingColumn;
}

+ (void)updateLabel:(id)arg1 withRichText:(id)arg2 alignment:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL needsSizingPass; // @synthesize needsSizingPass=_needsSizingPass;
@property(nonatomic) unsigned long long indexOfFirstTrailingColumn; // @synthesize indexOfFirstTrailingColumn=_indexOfFirstTrailingColumn;
@property(nonatomic) unsigned long long indexOfFirstCenteredColumnForForcedCentering; // @synthesize indexOfFirstCenteredColumnForForcedCentering=_indexOfFirstCenteredColumnForForcedCentering;
@property(retain, nonatomic) NSMutableArray *currentListOfViews; // @synthesize currentListOfViews=_currentListOfViews;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) TLKTableRow *tableRow; // @synthesize tableRow=_tableRow;
@property(retain, nonatomic) TLKGridLayoutManager *manager; // @synthesize manager=_manager;
- (void)generateLabelsAndImagesIfNecessary;
- (void)resetStateOfAllViews;
- (void)observedPropertiesChanged;
- (void)layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

