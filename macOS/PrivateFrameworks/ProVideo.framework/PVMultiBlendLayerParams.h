//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/NSCopying-Protocol.h>
#import <ProVideo/NSSecureCoding-Protocol.h>

@interface PVMultiBlendLayerParams : NSObject <NSSecureCoding, NSCopying>
{
    float _opacity;
    int _mode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) int hgBlendMode;
- (id)blendModeName;
- (void)_sharedInitWithOpacity:(float)arg1 mode:(int)arg2;
- (id)initWithOpacity:(float)arg1 mode:(int)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

