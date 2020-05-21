//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDKeychainItem : NSObject
{
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
    const struct __CFData *_persistentRef;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) const struct __CFData *persistentRef; // @synthesize persistentRef=_persistentRef;
- (id)debugDescription;
- (id)description;
- (void)_reloadProperties;
- (id)_modifiedProperties;
- (void)_clearDirtyProperties;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
@property(nonatomic) long long version;
- (BOOL)_setMetadata:(id)arg1 withError:(id *)arg2;
@property(copy, nonatomic) NSDictionary *metadata;
@property(nonatomic) BOOL synchronizable;
@property(copy, nonatomic) NSString *accessibility;
@property(copy, nonatomic) NSString *accessGroup;
@property(copy, nonatomic) NSString *service;
@property(copy, nonatomic) NSString *account;
- (id)_metadataWithError:(id *)arg1;
@property(readonly, nonatomic) struct __SecAccessControl *accessControlRef;
- (BOOL)save:(id *)arg1;
- (void)reload;
- (void)dealloc;
- (id)initWithPersistentRef:(const struct __CFData *)arg1 properties:(id)arg2;
- (id)initWithPersistentRef:(const struct __CFData *)arg1;
- (id)init;

@end

