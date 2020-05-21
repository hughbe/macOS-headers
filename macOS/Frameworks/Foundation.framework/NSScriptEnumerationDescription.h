//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSScriptValueTypeDescription.h>

@class NSArray;

@interface NSScriptEnumerationDescription : NSScriptValueTypeDescription
{
    NSArray *_enumeratorDescriptions;
}

+ (id)enumerationDescriptionFromName:(id)arg1 implDeclaration:(id)arg2 presoDeclaration:(id)arg3;
+ (id)_enumeratorDescriptionsFromImplDeclarations:(id)arg1 presoDeclarations:(id)arg2;
- (id)enumeratorDescriptions;
- (id)errorExpectedTypeDescriptor;
- (id)coercedValue:(id)arg1;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (BOOL)isEnumeration;
- (void)dealloc;
- (id)initWithName:(id)arg1 appleEventCode:(unsigned int)arg2 enumeratorDescriptions:(id)arg3;
- (id)initWithName:(id)arg1 appleEventCode:(unsigned int)arg2 enumeratorDescriptions:(id)arg3 isHidden:(BOOL)arg4;
- (void)appendEnumerationDeclarationToAETEData:(id)arg1 includingParts:(int)arg2;
- (BOOL)hasHiddenParts;
- (id)_descriptionWithTabCount:(unsigned long long)arg1;

@end

