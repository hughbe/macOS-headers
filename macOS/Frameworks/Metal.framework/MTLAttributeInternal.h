//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLAttribute.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLAttributeInternal : MTLAttribute
{
    unsigned char _flags;
    NSString *_name;
    unsigned long long _attributeIndex;
    unsigned long long _attributeType;
}

- (unsigned long long)attributeType;
- (unsigned long long)attributeIndex;
- (id)name;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (BOOL)isPatchControlPointData;
- (BOOL)isPatchData;
- (void)setAttributeType:(unsigned long long)arg1;
- (BOOL)isActive;
- (void)dealloc;
- (id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(struct MTLAttributeFlags)arg4;

@end

