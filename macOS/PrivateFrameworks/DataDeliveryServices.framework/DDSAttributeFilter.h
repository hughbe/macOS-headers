//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_filters;
}

+ (BOOL)supportsSecureCoding;
+ (id)attributeFilterWithDictionary:(id)arg1;
+ (id)attributeFilter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *filters; // @synthesize filters=_filters;
- (unsigned long long)hash;
- (BOOL)isEqualToQueryFilter:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)removeAllowedValues:(id)arg1 forKey:(id)arg2;
- (void)removeAllowedValue:(id)arg1 forKey:(id)arg2;
- (void)addAllowedValues:(id)arg1 forKey:(id)arg2;
- (void)addAllowedValue:(id)arg1 forKey:(id)arg2;
- (BOOL)doesContainAttributes:(id)arg1;
- (id)entriesMatchingAttributes:(id)arg1;
- (void)addEntriesFromFilter:(id)arg1;
- (id)_setForKey:(id)arg1;
- (void)enumerateAllowedValuesAndKeys:(CDUnknownBlockType)arg1;
- (id)allowedValuesForKey:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

