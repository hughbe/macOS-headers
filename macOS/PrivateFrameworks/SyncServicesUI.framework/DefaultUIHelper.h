//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DefaultUIHelper : NSObject
{
}

+ (id)sharedInstance;
- (id)_prependedLabelForNode:(id)arg1 relationshipName:(id)arg2 comparisonNodes:(id)arg3 changeType:(int)arg4;
- (id)identityKeysForEntityName:(id)arg1;
- (id)_colorSwatchTextAttachmentForColor:(id)arg1 borderColor:(id)arg2;
- (id)_attributedStringForRecordNode:(id)arg1 relationshipName:(id)arg2 withComparisonNodes:(id)arg3;
- (id)_attributedStringForRecordNode:(id)arg1 relationshipName:(id)arg2 withComparisonNodes:(id)arg3 childChangeType:(int)arg4;
- (id)_attributedStringForRecordNode:(id)arg1 forKeys:(id)arg2 joinerString:(id)arg3 withComparisonNodes:(id)arg4;
- (id)_attributedStringForValueInRecordNode:(id)arg1 propertyName:(id)arg2 isIdentifierProperty:(BOOL)arg3 isChangedProperty:(BOOL)arg4;
- (BOOL)attributedStringLabel:(id *)arg1 forRecordNode:(id)arg2 propertyName:(id)arg3 withComparisonNodes:(id)arg4;
- (BOOL)attributedString:(id *)arg1 forRecordNode:(id)arg2 dependentPropertyNames:(id)arg3 withComparisonNodes:(id)arg4;
- (BOOL)attributedString:(id *)arg1 forRecordNode:(id)arg2 propertyName:(id)arg3 withComparisonNodes:(id)arg4;
- (BOOL)orderedPropertyNames:(id *)arg1 forPropertyNames:(id)arg2 forRecordNode:(id)arg3 withComparisonNodes:(id)arg4;
- (BOOL)relationshipIdentityString:(id *)arg1 forRecordNode:(id)arg2 withComparisonNodes:(id)arg3;
- (BOOL)identityString:(id *)arg1 forRecordNode:(id)arg2 withComparisonNodes:(id)arg3;
- (BOOL)attributedString:(id *)arg1 forRecordNode:(id)arg2 withComparisonNodes:(id)arg3;

@end

