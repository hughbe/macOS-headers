//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PXFileBackedImageKey : NSObject
{
    NSURL *_url;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUrl:(id)arg1 size:(struct CGSize)arg2;

@end

