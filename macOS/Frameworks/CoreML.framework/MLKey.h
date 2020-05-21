//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class NSString;

@interface MLKey : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_scope;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasSameNameAsKey:(id)arg1;
- (BOOL)hasGlobalScope;
- (id)deletingPrefixingScope:(id)arg1;
- (id)scopedTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyName:(id)arg1;
- (id)initWithKeyName:(id)arg1 scope:(id)arg2;

@end

