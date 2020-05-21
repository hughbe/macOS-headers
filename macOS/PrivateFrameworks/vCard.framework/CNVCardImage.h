//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/NSCopying-Protocol.h>
#import <vCard/NSMutableCopying-Protocol.h>

@class NSData, NSDictionary;

@interface CNVCardImage : NSObject <NSCopying, NSMutableCopying>
{
    NSData *_data;
    NSDictionary *_cropRects;
    struct CGSize _size;
}

+ (struct CGSize)sizeOfImageData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy, nonatomic) NSDictionary *cropRects; // @synthesize cropRects=_cropRects;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)describePropertiesWithBuilder:(id)arg1;
- (id)description;
- (id)initWithData:(id)arg1 cropRects:(id)arg2 size:(struct CGSize)arg3;
- (id)initWithData:(id)arg1 cropRects:(id)arg2;
- (id)init;

@end

