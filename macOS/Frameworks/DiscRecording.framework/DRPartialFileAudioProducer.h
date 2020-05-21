//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DRPartialFileAudioProducer : NSObject
{
    unsigned int bytesOfSilence;
    void *fileProducer;
}

+ (id)blockLengthOfFile:(id)arg1;
+ (id)producer;
- (void)cleanupTrackAfterBurn:(id)arg1;
- (unsigned int)produceDataForTrack:(id)arg1 intoBuffer:(char *)arg2 length:(unsigned int)arg3 atAddress:(unsigned long long)arg4 blockSize:(unsigned int)arg5 ioFlags:(unsigned int *)arg6;
- (unsigned int)producePreGapForTrack:(id)arg1 intoBuffer:(char *)arg2 length:(unsigned int)arg3 atAddress:(unsigned long long)arg4 blockSize:(unsigned int)arg5 ioFlags:(unsigned int *)arg6;
- (unsigned int)produceDataIntoBuffer:(char *)arg1 length:(unsigned int)arg2 blockSize:(unsigned int)arg3;
- (BOOL)prepareTrack:(id)arg1 forBurn:(id)arg2 toMedia:(id)arg3;
- (void)finalize;
- (void)dealloc;

@end

