//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MLPData : NSObject
{
    unsigned int _label;
    NSData *_oneHot;
    NSData *_pixels;
    NSData *_classDist;
}

- (void).cxx_destruct;
@property(retain) NSData *classDist; // @synthesize classDist=_classDist;
@property(retain) NSData *pixels; // @synthesize pixels=_pixels;
@property(retain) NSData *oneHot; // @synthesize oneHot=_oneHot;
@property unsigned int label; // @synthesize label=_label;

@end

