//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageModelController, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFAKPageAdaptorPrivate : NSObject
{
    _Bool isTornDown;
    PDFPage *pdfPage;
    AKPageModelController *akPageModelController;
    _Bool isObservingPageModel;
    _Bool isSyncingFromPDFPage;
    _Bool isSyncingFromAKPageModel;
}

- (void).cxx_destruct;

@end

