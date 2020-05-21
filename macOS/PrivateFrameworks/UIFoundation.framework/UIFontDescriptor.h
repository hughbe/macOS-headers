//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSFontDescriptor.h>

@class NSMutableDictionary;

@interface UIFontDescriptor : NSFontDescriptor
{
    NSMutableDictionary *_attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

+ (BOOL)supportsSecureCoding;
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1;
+ (id)_createMungledDictionary:(id)arg1;
- (id)description;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1 mask:(unsigned int)arg2;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)postscriptName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)_attributes;
- (id)fontAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFontAttributes:(id)arg1;
- (id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2;

@end

