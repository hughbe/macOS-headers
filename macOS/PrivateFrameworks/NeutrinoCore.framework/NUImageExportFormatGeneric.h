//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageExportFormat.h>

@class NSDictionary, NSString;

@interface NUImageExportFormatGeneric : NUImageExportFormat
{
    int _renderFormat;
    NSString *_fileType;
    NSDictionary *_options;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property int renderFormat; // @synthesize renderFormat=_renderFormat;
@property(copy) NSString *fileType; // @synthesize fileType=_fileType;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileType:(id)arg1;

@end

