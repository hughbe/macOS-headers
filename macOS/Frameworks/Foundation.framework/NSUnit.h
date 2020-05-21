//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSUnit : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_symbol;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
@property(readonly, copy) NSString *symbol; // @synthesize symbol=_symbol;
@property(readonly) Class _effectiveUnitClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithSymbol:(id)arg1;
- (id)init;

@end

