//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class CALayer, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFIconView : NSCollectionViewItem
{
    PDFDocument *_document;
    int _pageIndex;
    _Bool _needsUpdate;
    CALayer *_imageSelectionLayer;
    CALayer *_textSelectionLayer;
}

- (void).cxx_destruct;
- (void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setNeedsUpdate;
- (void)viewDidLoad;

@end

