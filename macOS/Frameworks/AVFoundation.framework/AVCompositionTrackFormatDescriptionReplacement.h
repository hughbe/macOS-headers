//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding>
{
    struct opaqueCMFormatDescription *_originalFormatDescription;
    struct opaqueCMFormatDescription *_replacementFormatDescription;
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) const struct opaqueCMFormatDescription *replacementFormatDescription;
@property(readonly) const struct opaqueCMFormatDescription *originalFormatDescription;
- (void)dealloc;
- (id)initWithOriginalFormatDescription:(struct opaqueCMFormatDescription *)arg1 andReplacementFormatDescription:(struct opaqueCMFormatDescription *)arg2;

@end

