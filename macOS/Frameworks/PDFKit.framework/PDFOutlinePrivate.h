//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PDFAction, PDFDocument, PDFOutline;

__attribute__((visibility("hidden")))
@interface PDFOutlinePrivate : NSObject
{
    PDFDocument *document;
    NSString *title;
    PDFAction *action;
    PDFOutline *parent;
    NSMutableArray *children;
    _Bool childrenLoaded;
    struct __CFDictionary *dictionary;
    _Bool open;
    struct CGPDFDictionary *srcDictionary;
}

- (void).cxx_destruct;

@end

