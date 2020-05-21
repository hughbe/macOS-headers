//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISVariantResourceProtocol-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISVectorVariantResource : NSObject <ISVariantResourceProtocol>
{
    NSString *_variantName;
    unsigned long long _flags;
    struct CGPDFDocument *_pdfDocument;
    NSURL *_URL;
}

+ (id)resourceWithURL:(id)arg1 resourceInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(readonly) struct CGPDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
@property(readonly) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly) NSString *variantName; // @synthesize variantName=_variantName;
- (struct CGImage *)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithURL:(id)arg1 variantName:(id)arg2 flags:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

