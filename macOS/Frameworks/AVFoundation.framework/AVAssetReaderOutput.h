//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject
{
    AVAssetReaderOutputInternal *_internal;
}

+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2;
+ (void)initialize;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderDecodeError;
- (void)markConfigurationAsFinal;
- (void)resetForReadingTimeRanges:(id)arg1;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (id)_errorForOSStatus:(int)arg1;
- (void)_cancelReading;
- (void)_markAsFinished;
- (BOOL)_isFinished;
- (id)currentTimeRanges;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
- (BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id *)arg1;
@property(readonly, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;
@property(readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property(nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
- (long long)_status;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
@property(readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg1;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (id)_asset;
- (void)setSupportsRandomAccess:(BOOL)arg1;
- (BOOL)supportsRandomAccess;
- (void)setMaximizePowerEfficiency:(BOOL)arg1;
- (BOOL)maximizePowerEfficiency;
@property(nonatomic) BOOL alwaysCopiesSampleData;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;
- (id)init;

@end

