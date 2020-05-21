//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSData, NSPDFImageRep;

@interface NSEPSImageRep : NSImageRep
{
    struct CGPoint _bBoxOrigin;
    NSData *_epsData;
    NSPDFImageRep *_pdfImageRep;
}

+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imageUnfilteredTypes;
+ (BOOL)canInitWithData:(id)arg1;
+ (id)imageRepWithData:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSData *EPSRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)draw;
- (void)prepareGState;
@property(readonly) struct CGRect boundingBox;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

