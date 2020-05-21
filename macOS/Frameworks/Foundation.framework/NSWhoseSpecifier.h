//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSScriptObjectSpecifier.h>

@class NSScriptWhoseTest;

@interface NSWhoseSpecifier : NSScriptObjectSpecifier
{
    NSScriptWhoseTest *_test;
    unsigned long long _startSubelementIdentifier;
    long long _startSubelementIndex;
    unsigned long long _endSubelementIdentifier;
    long long _endSubelementIndex;
}

+ (BOOL)_canCreateCollapsedSpecifierFromRangeRecord:(id)arg1;
+ (BOOL)_canCreateCollapsedSpecifierFromAbsolutePositionRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_putKeyFormAndDataInRecord:(id)arg1;
- (id)_simpleDescription;
- (id)_subsetDescription;
- (BOOL)_specifiesSingleIndexedObjectPerContainer;
- (id)_specifiedIndexesOfObjectsInContainer:(id)arg1;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)arg1;
- (unsigned long long)_objectIndexForSubelementIdentifier:(unsigned long long)arg1 subelementIndex:(long long)arg2 fromIndexes:(id)arg3;
- (id)_indexesOfPassingObjectsInContainer:(id)arg1;
@property long long endSubelementIndex;
@property unsigned long long endSubelementIdentifier;
@property long long startSubelementIndex;
@property unsigned long long startSubelementIdentifier;
@property(retain) NSScriptWhoseTest *test;
- (void)dealloc;
- (id)_initFromRecord:(id)arg1;
- (id)_initFromRangeRecord:(id)arg1;
- (id)_initFromAbsolutePositionRecord:(id)arg1;
- (id)_initFromTestRecord:(id)arg1;
- (BOOL)_setEndSubelementFromDescriptor:(id)arg1;
- (BOOL)_setStartSubelementFromDescriptor:(id)arg1;
- (id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3 test:(id)arg4;
- (id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3;
- (BOOL)_shouldIgnoreInvalidIndexError;

@end

