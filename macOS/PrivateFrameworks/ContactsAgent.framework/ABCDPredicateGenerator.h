//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABCDPredicateGenerator : NSObject
{
}

+ (id)_predicateForUnknownKeyWithComparison:(long long)arg1 value:(id)arg2;
+ (id)_predicateForMessagingAddressService:(id)arg1 comparison:(long long)arg2 value:(id)arg3 label:(id)arg4 diacriticInsensitive:(BOOL)arg5;
+ (id)_predicateForToManyRelationshipName:(id)arg1 relativeKeyPath:(id)arg2 comparison:(long long)arg3 value:(id)arg4 label:(id)arg5 diacriticInsensitive:(BOOL)arg6;
+ (id)_predicateForCustomProperty:(id)arg1 comparison:(long long)arg2 value:(id)arg3 label:(id)arg4 diacriticInsensitive:(BOOL)arg5;
+ (id)_customPropertyValueKeyNameForPropertyType:(long long)arg1 isSerializedPropertyList:(char *)arg2;
+ (id)_predicateForYearlessSearchOnDatePropertyKeyPath:(id)arg1 toManyRelationshipName:(id)arg2 futureOnly:(BOOL)arg3 allNotMatch:(BOOL)arg4 customPropertyPath:(id)arg5 customProperty:(id)arg6 searchValue:(id)arg7 label:(id)arg8;
+ (id)_predicateForKeyPath:(id)arg1 comparison:(long long)arg2 value:(id)arg3 diacriticInsensitive:(BOOL)arg4;
+ (id)_coreDataPredicateForRemoteSearchElementMatch:(id)arg1 coreDataClass:(Class)arg2 managedObjectContext:(id)arg3 accountCollection:(id)arg4;
+ (id)_coreDataPredicateForRemoteSearchElementConjuction:(id)arg1 coreDataClass:(Class)arg2 managedObjectContext:(id)arg3 accountCollection:(id)arg4;
+ (BOOL)_remoteSearchElementIsMakingAValidSearch:(id)arg1;
+ (Class)_coreDataClassFromPublicClassString:(id)arg1;
+ (id)_predicateForMemberOfSmartGroup:(id)arg1 comparison:(long long)arg2 helper:(CDUnknownBlockType)arg3;
+ (id)_predicateForNotMemberOfDumbGroup:(id)arg1;
+ (id)_predicateForMemberOfDumbGroup:(id)arg1;
+ (id)_predicateForMemberOfDumbGroup:(id)arg1 comparison:(long long)arg2 context:(id)arg3;
+ (id)_predicateByAddingVisibilityClauseToPredicate:(id)arg1;
+ (id)_predicateForMemberOfGroup:(id)arg1 comparison:(long long)arg2 implClass:(Class)arg3 context:(id)arg4 accountCollection:(id)arg5;
+ (id)coreDataPredicateForRemoteSearchElement:(id)arg1 withAccountCollection:(id)arg2;
+ (void)initialize;

@end

