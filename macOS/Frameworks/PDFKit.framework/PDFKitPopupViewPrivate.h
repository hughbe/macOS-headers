//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScrollView, NSString, NSTextView, NSUndoManager, PDFAnnotation, PDFPageView, PDFView;

__attribute__((visibility("hidden")))
@interface PDFKitPopupViewPrivate : NSObject
{
    PDFAnnotation *parentAnnotation;
    PDFPageView *pageView;
    PDFView *view;
    NSTextView *popupTextView;
    NSUndoManager *popupTextViewUndoManager;
    NSScrollView *popupScrollView;
    NSString *contents;
    _Bool deviceIsiPhone;
    _Bool deviceIsiPad;
}

- (void).cxx_destruct;

@end

