//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@interface CUIImage : NSObject <NSCopying>
{
    struct CGImage *_cgImage;
}

+ (id)imageWithCGImage:(struct CGImage *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (struct CGImage *)cgImage;
@property(readonly, nonatomic) struct CGImage *image;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1;

@end

