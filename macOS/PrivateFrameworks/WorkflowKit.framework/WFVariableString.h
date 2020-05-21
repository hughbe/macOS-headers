//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/WFVariableSerialization-Protocol.h>

@class NSArray, NSString;

@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying>
{
    NSArray *_stringsAndVariables;
}

+ (BOOL)dictionaryIsSerializedVariableString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *stringsAndVariables; // @synthesize stringsAndVariables=_stringsAndVariables;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *variables;
@property(readonly, nonatomic) NSString *stringByReplacingVariablesWithNames;
@property(readonly, nonatomic) NSString *stringByRemovingVariables;
- (void)processIntoStringsAndAttachmentsWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processIntoContentItemsWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithAttachmentCharacterString:(id)arg1 variableGetter:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithStringsAndVariables:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithVariable:(id)arg1;
- (void)removeVariableDelegate:(id)arg1;
- (void)addVariableDelegate:(id)arg1;
- (BOOL)representsSingleContentVariable;
- (id)variablesOfType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

