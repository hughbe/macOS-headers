//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QTCaptureDecompressedAudioOutputInternal : NSObject
{
    NSMutableArray *connections;
    struct __CFDictionary *audioConverterUnits;
    struct __CFDictionary *audioToProcsUnits;
    struct __CFDictionary *callbackData;
    struct __CFDictionary *compressionOptions;
}

- (void)dealloc;
- (id)init;

@end

