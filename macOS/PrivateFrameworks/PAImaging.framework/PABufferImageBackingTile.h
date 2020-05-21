//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/PAImageTile-Protocol.h>

@class NSString, PA2DBuffer;

@interface PABufferImageBackingTile : NSObject <PAImageTile>
{
    PA2DBuffer *_buffer;
    unsigned long long _tileIndex;
}

- (void).cxx_destruct;
- (BOOL)readBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)readTextureRegion:(id)arg1 withContext:(id)arg2 block:(CDUnknownBlockType)arg3;
- (struct PFIntRect_st)_tileBounds;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (unsigned long long)index;
- (id)initWithBuffer:(id)arg1 tileIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

