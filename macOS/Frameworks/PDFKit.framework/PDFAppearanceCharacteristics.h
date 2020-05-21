//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSColor, NSDictionary, NSString, PDFAppearanceCharacteristicsPrivate;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying>
{
    PDFAppearanceCharacteristicsPrivate *_private;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;
@property(copy, nonatomic) NSString *downCaption;
@property(copy, nonatomic) NSString *rolloverCaption;
@property(copy, nonatomic) NSString *caption;
@property(nonatomic) long long controlType;
- (void)addColor:(id)arg1 forKey:(struct __CFString *)arg2 toDictionaryRef:(struct __CFDictionary *)arg3;
- (struct __CFDictionary *)createDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forControlType:(long long)arg2;
- (BOOL)scaleProportional;
- (struct CGPDFForm *)icon;
@property(nonatomic) long long rotation;
@property(copy, nonatomic) NSColor *borderColor;
@property(copy, nonatomic) NSColor *backgroundColor;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

