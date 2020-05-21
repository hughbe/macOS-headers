//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding>
{
    CALayer *_target;
    CAStateElement *_source;
}

+ (BOOL)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAStateElement *source; // @synthesize source=_source;
@property(nonatomic) __weak CALayer *target; // @synthesize target=_target;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)CAMLTypeSupportedForKey:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (id)save;
- (void)apply:(id)arg1;
- (BOOL)matches:(id)arg1;
@property(readonly, copy, nonatomic) NSString *keyPath;
- (id)targetName;
- (void)dealloc;

@end

