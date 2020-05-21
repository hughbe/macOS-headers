//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject
{
    struct atomic_flag _cancelFlag;
    BOOL _cancelRequested;
    PHImageDecoder *_initialDecoder;
    unsigned long long _figRequestID;
    struct FigPhotoDecompressionContainer *_figDecompressionContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) struct FigPhotoDecompressionContainer *figDecompressionContainer; // @synthesize figDecompressionContainer=_figDecompressionContainer;
@property(nonatomic) unsigned long long figRequestID; // @synthesize figRequestID=_figRequestID;
@property(readonly, nonatomic) PHImageDecoder *initialDecoder; // @synthesize initialDecoder=_initialDecoder;
- (void)dealloc;
@property(readonly, nonatomic) BOOL cancelRequested;
- (void)cancel;
- (id)initWithImageIODecoder:(id)arg1;
- (id)initWithFigRequestID:(unsigned long long)arg1 container:(struct FigPhotoDecompressionContainer *)arg2 figDecoder:(id)arg3;

@end

