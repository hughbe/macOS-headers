/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFontPickerFontInfo : NSObject {
    NSAttributedString * _attributedString;
    NSString * _attributedStringContentSize;
    NSString * _familyName;
    UIFontDescriptor * _fontDescriptor;
    unsigned long long  _hasMultipleFaces;
    double  _lineHeight;
    NSString * _localizedFamilyName;
    NSString * _localizedStyleName;
    NSString * _postscriptName;
    NSString * _styleName;
    NSArray * _subInfos;
}

@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSArray *faces;
@property (readonly) _UIFontPickerFontInfo *familyInfo;
@property (readonly) NSString *familyName;
@property (readonly) UIFontDescriptor *fontDescriptor;
@property (getter=isFontFamilyAvailable, readonly) bool fontFamilyAvailable;
@property (readonly) bool hasMultipleFaces;
@property (readonly) double lineHeight;
@property (readonly) NSString *localizedFamilyName;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *postscriptName;
@property (readonly) NSString *styleName;

+ (id)infoWithFamilyName:(id)arg1;
+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor { }*)arg1;

- (void).cxx_destruct;
- (id)_fontStringForTraitCollection:(id)arg1;
- (void)_populateLocalizedNamesIfNecessary;
- (id)_sortedFacesByWeight;
- (void)_updateAttributedStringIfNeeded;
- (id)attributedString;
- (id)description;
- (id)faceMatchingDescriptor:(id)arg1;
- (id)faces;
- (id)familyInfo;
- (id)familyName;
- (id)fontDescriptor;
- (bool)hasMultipleFaces;
- (unsigned long long)hash;
- (id)initWithFamilyName:(id)arg1;
- (id)initWithFontDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFontFamilyAvailable;
- (double)lineHeight;
- (id)localizedFamilyName;
- (id)localizedName;
- (bool)matchesConfiguration:(id)arg1;
- (bool)matchesFamilyForFontDescriptor:(id)arg1;
- (bool)matchesFontDescriptor:(id)arg1;
- (bool)matchesLanguages:(id)arg1;
- (bool)matchesTraits:(unsigned int)arg1;
- (id)postscriptName;
- (id)styleName;

@end
