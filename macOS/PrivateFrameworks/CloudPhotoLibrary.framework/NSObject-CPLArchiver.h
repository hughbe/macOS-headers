//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (CPLArchiver)
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)cplAllPropertyNames;
+ (void)cplDumpProperties;
+ (id)_cplPropertyAttributeMap;
+ (void)_addPropertyAttributeMapToPropertyMapLocked:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (unsigned long long)cplSpecialHash;
- (BOOL)cplSpecialIsEqual:(id)arg1;
- (id)cplFullDescription;
- (void)cplCopyProperties:(id)arg1 fromObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;
- (void)cplCopyPropertiesFromObject:(id)arg1 withCopyBlock:(CDUnknownBlockType)arg2;
- (void)_cplCopyProperties:(id)arg1 fromOtherObject:(id)arg2 withCopyBlock:(CDUnknownBlockType)arg3;
- (unsigned long long)cplHash;
- (BOOL)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 withEqualityBlock:(CDUnknownBlockType)arg3;
- (BOOL)cplProperties:(id)arg1 areEqualToPropertiesOf:(id)arg2 differingProperty:(id *)arg3 withEqualityBlock:(CDUnknownBlockType)arg4;
- (BOOL)cplIsEqual:(id)arg1 withEqualityBlock:(CDUnknownBlockType)arg2;
- (BOOL)cplIsEqual:(id)arg1;
- (void)cplDecodePropertiesFromCoder:(id)arg1;
- (void)cplEncodePropertiesWithCoder:(id)arg1;
- (id)cplDeepCopy;
@end

