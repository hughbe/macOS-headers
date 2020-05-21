//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiscRecording/DRContentGenerator-Protocol.h>

__attribute__((visibility("hidden")))
@interface DRAudioGenerator : NSObject <DRContentGenerator>
{
    void *audioProducer;
    unsigned int length;
}

- (BOOL)completed;
- (unsigned int)produceIntoBuffer:(char *)arg1 length:(unsigned int)arg2 blockSize:(unsigned int)arg3;
- (id)initWithGeneratorInfo:(id)arg1;

@end

