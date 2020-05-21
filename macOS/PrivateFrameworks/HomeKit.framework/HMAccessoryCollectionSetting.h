//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessorySetting.h>

#import <HomeKit/NSFastEnumeration-Protocol.h>

@class NSSet;

@interface HMAccessoryCollectionSetting : HMAccessorySetting <NSFastEnumeration>
{
}

+ (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;
+ (void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2;
+ (id)itemValueClassesForKeyPath:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_setting:(id)arg1 didRemoveConstraint:(id)arg2;
- (void)_setting:(id)arg1 didAddConstraint:(id)arg2;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)value;
- (Class)valueClass;
- (void)replaceItems:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)replaceItem:(id)arg1 withItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setItemValueClasses:(id)arg1;
- (void)setItemValueClass:(Class)arg1;
@property(readonly, copy) NSSet *itemValueClasses;
- (id)initWithInternal:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;

@end

