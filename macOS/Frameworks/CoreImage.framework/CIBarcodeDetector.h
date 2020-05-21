//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBarcodeDetector : CIDetector
{
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
}

@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end

