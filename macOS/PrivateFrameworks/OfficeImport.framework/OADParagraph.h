//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADCharacterProperties, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADParagraph : NSObject
{
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (void).cxx_destruct;
- (id)description;
- (id)plainText;
- (BOOL)isSimilarToParagraph:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)applyProperties:(id)arg1;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)bulletCharacterProperties;
- (BOOL)hasBulletCharacterProperties;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (id)paragraphEndCharacterProperties;
- (id)addFooterField;
- (id)addDateTimeFieldWithFormat:(int)arg1;
- (id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2;
- (id)addRegularTextRun;
- (id)addTextLineBreak;
- (unsigned long long)lineBreakCount;
- (void)removeAllTextRuns;
- (id)textRunAtIndex:(unsigned long long)arg1;
- (unsigned long long)textRunCount;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (id)properties;
- (id)init;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (id)addSlideNumberField;

@end

