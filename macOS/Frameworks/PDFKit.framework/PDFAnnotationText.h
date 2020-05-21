//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import <PDFKit/NSCoding-Protocol.h>
#import <PDFKit/NSCopying-Protocol.h>

@class PDFAnnotationTextPrivateVars;

@interface PDFAnnotationText : PDFAnnotation <NSCopying, NSCoding>
{
    PDFAnnotationTextPrivateVars *_private2;
}

- (void).cxx_destruct;
- (void)setIconName:(id)arg1;
- (id)iconName;
- (void)setPage:(id)arg1;
- (void)dealloc;
- (void)setIsSelected:(BOOL)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (void)setIconType:(long long)arg1;
- (long long)iconType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

