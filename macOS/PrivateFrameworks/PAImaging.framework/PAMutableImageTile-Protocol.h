//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PAImaging/PAImageTile-Protocol.h>

@class IPARegion, PAOpenGLContext;

@protocol PAMutableImageTile <PAImageTile>
- (BOOL)writeBufferRegion:(IPARegion *)arg1 withBlock:(void (^)(PAMutableBuffer *))arg2;
- (BOOL)writeTextureRegion:(IPARegion *)arg1 withContext:(PAOpenGLContext *)arg2 block:(void (^)(PAGLTextureRect *))arg3;
@end

