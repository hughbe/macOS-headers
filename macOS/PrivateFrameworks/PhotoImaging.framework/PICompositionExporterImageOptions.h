//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions
{
    BOOL _optimizeForSharing;
    NUImageExportFormat *_imageExportFormat;
    CDUnknownBlockType _metadataProcessor;
}

- (void).cxx_destruct;
@property BOOL optimizeForSharing; // @synthesize optimizeForSharing=_optimizeForSharing;
@property(copy) CDUnknownBlockType metadataProcessor; // @synthesize metadataProcessor=_metadataProcessor;
@property(copy) NUImageExportFormat *imageExportFormat; // @synthesize imageExportFormat=_imageExportFormat;
- (id)imageExportFormatForURL:(id)arg1;
- (void)setImageExportFormatJpegWithQuality:(double)arg1;

@end

