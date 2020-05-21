//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PICompositionExportResult.h>

@class NSData, NSDictionary, NSURL;

@interface PICompositionExportAuxiliaryResult : PICompositionExportResult
{
    NSData *_companionImageData;
    NSURL *_companionVideoURL;
    NSDictionary *_auxiliaryImages;
    NSDictionary *_properties;
}

- (void).cxx_destruct;
@property(copy) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain) NSDictionary *auxiliaryImages; // @synthesize auxiliaryImages=_auxiliaryImages;
@property(retain) NSURL *companionVideoURL; // @synthesize companionVideoURL=_companionVideoURL;
@property(retain) NSData *companionImageData; // @synthesize companionImageData=_companionImageData;

// Remaining properties
@property CDStruct_912cb5d2 inputSize; // @dynamic inputSize;

@end

