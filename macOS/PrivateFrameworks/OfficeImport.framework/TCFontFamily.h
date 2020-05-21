//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TCFontFamily : NSObject
{
    NSDictionary *_namesByLanguage;
    NSArray *_members;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (id)englishName;
- (BOOL)doesAnyNonBoldVariantExistForFont:(id)arg1;
- (id)variantByRemovingBoldFromFont:(id)arg1;
- (id)variantByAddingBoldToFont:(id)arg1;
- (unsigned long long)regularFontIndexInWeightVariants:(id)arg1;
- (unsigned long long)boldFontIndexInWeightVariants:(id)arg1;
- (id)weightVariantsOfFont:(id)arg1;
- (BOOL)allFamilyIsBold;
- (id)variantByTogglingItalicOfFont:(id)arg1;
- (BOOL)allFamilyIsItalic;
- (BOOL)traitsAreAdditive;
- (id)regularVariant:(BOOL)arg1;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)bestMatchForStyling:(struct TCFontStyling)arg1;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;

@end

