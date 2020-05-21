//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLEntity_DerivedAttributesExtension : NSObject
{
    NSSQLEntity *_entity;
    struct __CFDictionary *_derivedAttributes;
    NSMutableArray *_triggerSQL;
    NSMutableDictionary *_migrationSQL;
}

- (id)migrationSQL;
- (id)triggerSQL;
- (void)_generateTriggerSQL;
- (void)addDerivationKeypath:(id)arg1 forAttribute:(id)arg2;
- (id)derivedAttributes;
- (id)entity;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;

@end

