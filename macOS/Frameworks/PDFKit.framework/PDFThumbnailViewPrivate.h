//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSFont, PDFIconCollectionView, PDFView;

__attribute__((visibility("hidden")))
@interface PDFThumbnailViewPrivate : NSObject
{
    PDFView *pdfView;
    struct CGSize thumbnailSize;
    NSColor *backgroundColor;
    int maximumNumberOfColumns;
    _Bool allowsDragging;
    NSFont *labelFont;
    _Bool allowsMultipleSelection;
    PDFIconCollectionView *iconsView;
}

- (void).cxx_destruct;

@end

