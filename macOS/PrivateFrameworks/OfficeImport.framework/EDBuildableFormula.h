//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDFormulaBuilding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDBuildableFormula : NSObject <EDFormulaBuilding>
{
    struct EDBuildablePtg *mTree;
    int mWarning;
}

- (unsigned int)removeOptionalPtgArgs:(unsigned int)arg1 minArgs:(unsigned int)arg2;
- (BOOL)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned int)arg2 numArgs:(unsigned int)arg3;
- (BOOL)replaceArgPtgAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (int)argTokenTypeAtIndex:(unsigned int)arg1;
- (_Bool)argTokenIsDurationAtIndex:(unsigned int)arg1;
- (BOOL)copyToken:(unsigned int)arg1 from:(id)arg2;
- (void)copyToFormula:(id)arg1;
- (id)formula;
- (_Bool)isSupportedFormula;
- (int)warningType;
- (void)setWarning:(int)arg1;
- (BOOL)fixTableOfConstantsRefs;
- (BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (BOOL)uppercaseArgAtIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(char *)arg1 withEDLinks:(id)arg2;
- (BOOL)convertRefs:(unsigned int)arg1 toTypes:(int *)arg2;
- (BOOL)convertRefs:(unsigned int)arg1 toType:(int)arg2;
- (void)convertRefsInList:(struct EDBuildablePtg *)arg1 toType:(int)arg2;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertToIntersect:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (BOOL)convertToList:(unsigned int)arg1;
- (BOOL)isConstantList:(unsigned int)arg1;
- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (BOOL)insertName:(unsigned long long)arg1 link:(unsigned long long)arg2 external:(BOOL)arg3 atIndex:(unsigned int)arg4;
- (BOOL)makeArrayForLastToken:(unsigned long long)arg1;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (void)removeTokenAtIndex:(unsigned long long)arg1;
- (void)replaceStringInStringTokenAtIndex:(unsigned long long)arg1 content:(id)arg2;
- (id)stringFromStringTokenAtIndex:(unsigned long long)arg1;
- (int)tokenTypeAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)shrinkSpanningRef:(struct EDBuildablePtg *)arg1;
- (BOOL)fixTableOfConstantsRef:(struct EDBuildablePtg *)arg1;
- (struct EDBuildablePtg *)tokenAtIndex:(unsigned long long)arg1 previousToken:(struct EDBuildablePtg **)arg2;
- (struct EDBuildablePtg *)tokenAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

