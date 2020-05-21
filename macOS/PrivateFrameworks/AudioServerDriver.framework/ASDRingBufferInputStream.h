//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioServerDriver/ASDStream.h>

@protocol ASDManagedRingBuffer;

@interface ASDRingBufferInputStream : ASDStream
{
    struct unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList>> _bufferList;
    id <ASDManagedRingBuffer> _ringBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <ASDManagedRingBuffer> ringBuffer; // @synthesize ringBuffer=_ringBuffer;
- (CDUnknownBlockType)readInputBlock;
- (void)setPhysicalFormat:(id)arg1;
- (void)stopStream;
- (void)startStream;
- (id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;

@end

