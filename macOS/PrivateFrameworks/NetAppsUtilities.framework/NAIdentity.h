//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NSArray;

@interface NAIdentity : NSObject <NSCopying>
{
    NSArray *_characteristics;
}

+ (id)na_identity;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isObject:(id)arg1 equalToObject:(id)arg2;
- (unsigned long long)hashOfObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharacteristics:(id)arg1;

@end

