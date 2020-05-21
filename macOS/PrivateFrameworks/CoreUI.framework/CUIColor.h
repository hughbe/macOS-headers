//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

@interface CUIColor : NSObject <NSCopying>
{
    struct CGColor *_cgColor;
}

+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
@property(readonly, nonatomic) struct CGColor *CGColor; // @synthesize CGColor=_cgColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)colorUsingCGColorSpace:(struct CGColorSpace *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;

@end

