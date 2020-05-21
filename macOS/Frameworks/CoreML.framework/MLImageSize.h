//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@interface MLImageSize : NSObject <NSSecureCoding>
{
    long long _pixelsWide;
    long long _pixelsHigh;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) long long pixelsHigh; // @synthesize pixelsHigh=_pixelsHigh;
@property(readonly) long long pixelsWide; // @synthesize pixelsWide=_pixelsWide;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImageSize:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2;

@end

