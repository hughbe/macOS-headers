//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFAnnotation, PDFPage, PDFScannerResult, PDFSelection;

__attribute__((visibility("hidden")))
@interface PDFSelectionTrackingData : NSObject
{
    PDFSelection *extendingSelection;
    int selectionMode;
    PDFPage *startPage;
    struct CGPoint startPoint;
    struct CGRect marquee;
    BOOL highlighted;
    PDFAnnotation *annotation;
    PDFScannerResult *pdfResult;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PDFScannerResult *pdfResult; // @synthesize pdfResult;
@property(nonatomic) __weak PDFAnnotation *annotation; // @synthesize annotation;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted;
@property(nonatomic) struct CGRect marquee; // @synthesize marquee;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint;
@property(nonatomic) __weak PDFPage *startPage; // @synthesize startPage;
@property(nonatomic) int selectionMode; // @synthesize selectionMode;
@property(retain, nonatomic) PDFSelection *extendingSelection; // @synthesize extendingSelection;

@end

