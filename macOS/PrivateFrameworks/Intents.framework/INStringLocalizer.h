//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSMapTable, NSString;

@interface INStringLocalizer : NSObject
{
    struct os_unfair_lock_s _lock;
    NSString *_languageCode;
    NSMapTable *_bundlesByIdentifier;
    NSMapTable *_bundlesByURL;
    NSMapTable *_bundleLocalizations;
    NSMapTable *_preferredBundleLocalizations;
    NSArray *_preferredLanguages;
}

+ (id)localizerForLanguage:(id)arg1;
+ (id)siriLocalizer;
+ (id)alternativeLocales;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(readonly, nonatomic) NSMapTable *preferredBundleLocalizations; // @synthesize preferredBundleLocalizations=_preferredBundleLocalizations;
@property(readonly, nonatomic) NSMapTable *bundleLocalizations; // @synthesize bundleLocalizations=_bundleLocalizations;
@property(readonly, nonatomic) NSMapTable *bundlesByURL; // @synthesize bundlesByURL=_bundlesByURL;
@property(readonly, nonatomic) NSMapTable *bundlesByIdentifier; // @synthesize bundlesByIdentifier=_bundlesByIdentifier;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (BOOL)matchesBundleLocalizations:(struct __CFBundle *)arg1;
- (id)preferredLocalizationsForBundle:(struct __CFBundle *)arg1;
- (id)localizationsForBundle:(struct __CFBundle *)arg1;
- (struct __CFBundle *)bundleWithIdentifier:(id)arg1 fileURL:(id)arg2;
@property(readonly, nonatomic) NSLocale *locale;
- (id)initWithLanguageCode:(id)arg1;
- (id)init;

@end

