//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISImage-Protocol.h>

__attribute__((visibility("hidden")))
@interface _ISImage : NSObject <ISImage>
{
    unsigned int _scale;
    struct CGImage *_CGImage;
    double _minimumSize;
}

@property unsigned int scale; // @synthesize scale=_scale;
@property double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
- (void)dealloc;

@end

