//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/NSObject-Protocol.h>

@class EDLinkReference, EDLinksCollection;

@protocol EDFormulaBuilding <NSObject>
- (_Bool)isSupportedFormula;
- (int)warningType;
- (void)setWarning:(int)arg1;
- (BOOL)uppercaseArgAtIndex:(unsigned int)arg1;
- (BOOL)fixTableOfConstantsRefs;
- (BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (EDLinkReference *)lastTokenRefOrArea3dLinkRefIsValid:(char *)arg1 withEDLinks:(EDLinksCollection *)arg2;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertToIntersect:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (void)removeTokenAtIndex:(unsigned long long)arg1;
- (int)tokenTypeAtIndex:(unsigned long long)arg1;
@end

