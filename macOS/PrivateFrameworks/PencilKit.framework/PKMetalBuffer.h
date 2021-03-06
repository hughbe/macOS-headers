//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKMetalResource-Protocol.h>

@class NSString;
@protocol MTLBuffer;

@interface PKMetalBuffer : NSObject <PKMetalResource>
{
    unsigned long long _lockCount;
    _Atomic int _isPurged;
    id <MTLBuffer> _metalBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MTLBuffer> metalBuffer; // @synthesize metalBuffer=_metalBuffer;
- (BOOL)isPurged;
- (void)unlock;
- (BOOL)lock;
- (id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

