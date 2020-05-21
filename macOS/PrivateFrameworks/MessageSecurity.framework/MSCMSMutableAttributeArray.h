//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface MSCMSMutableAttributeArray : NSMutableArray
{
    NSMutableArray *_attributes;
    struct Attribute *_encodedAttributes;
    NSMutableArray *_genericAttributes;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *genericAttributes; // @synthesize genericAttributes=_genericAttributes;
@property struct Attribute *encodedAttributes; // @synthesize encodedAttributes=_encodedAttributes;
@property(retain) NSMutableArray *attributes; // @synthesize attributes=_attributes;
- (id)getAttributesWithType:(id)arg1;
- (id)calculateAttributesWithDigest:(id)arg1 error:(id *)arg2;
- (struct Attribute *)encodeAttributesWithError:(id *)arg1;
- (void)removeAttributes:(id)arg1;
- (void)dealloc;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)reset;

@end

