//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRCRawImage : NSObject
{
    struct CGImage *_imageRef;
    char *_data;
    long long _width;
    long long _height;
    long long _bytesPerPixel;
}

+ (id)rawImageForImage:(struct CGImage *)arg1;
@property(nonatomic) long long bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(nonatomic) char *data; // @synthesize data=_data;
@property(retain, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (void)dealloc;

@end

