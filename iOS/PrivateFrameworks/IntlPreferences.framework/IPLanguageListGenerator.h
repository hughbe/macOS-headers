/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface IPLanguageListGenerator : NSObject {
    NSArray * _preferredLanguages;
    NSLocale * _preferredLocale;
    NSString * _systemDisplayLanguage;
    NSArray * _systemLanguages;
}

@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSLocale *preferredLocale;
@property (nonatomic, readonly) NSString *systemDisplayLanguage;
@property (nonatomic, readonly) NSArray *systemLanguages;

+ (bool)canRemoveLanguages:(id)arg1 fromPreferredLanguages:(id)arg2;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:(bool)arg1 forPreferredLanguages:(id)arg2;
+ (id)generator;
+ (void)preheat;
+ (id)regionalVariantLanguagesForBaseLanguage:(id)arg1;
+ (id)regionalVariantLanguagesForSystemLanguages;
+ (void)sortByLocalizedLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)deviceLanguagesForChangingDeviceLanguage:(bool)arg1;
- (id)initWithPreferredLanguages:(id)arg1 preferredLocale:(id)arg2 systemLanguages:(id)arg3;
- (id)otherLanguages;
- (id)preferredLanguages;
- (id)preferredLocale;
- (id)systemDisplayLanguage;
- (id)systemLanguages;

@end
