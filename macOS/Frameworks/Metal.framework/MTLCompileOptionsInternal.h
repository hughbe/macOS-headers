//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLCompileOptions.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLCompileOptionsInternal : MTLCompileOptions
{
    BOOL _userSetLanguageVersion;
    NSDictionary *_preprocessorMacros;
    BOOL _fastMathEnabled;
    BOOL _framebufferReadEnabled;
    BOOL _tracingEnabled;
    BOOL _debuggingEnabled;
    unsigned long long _languageVersion;
    BOOL _compileTimeStatisticsEnabled;
    NSString *_additionalCompilerArguments;
    unsigned char _sourceLanguage;
    unsigned long long _libraryType;
    NSArray *_libraries;
}

- (void)setLibraryType:(unsigned long long)arg1;
- (unsigned long long)libraryType;
- (void)setSourceLanguage:(unsigned char)arg1;
- (unsigned char)sourceLanguage;
- (void)setCompileTimeStatisticsEnabled:(BOOL)arg1;
- (BOOL)compileTimeStatisticsEnabled;
- (void)setTracingEnabled:(BOOL)arg1;
- (BOOL)tracingEnabled;
- (unsigned long long)languageVersion;
- (void)setFramebufferReadEnabled:(BOOL)arg1;
- (BOOL)framebufferReadEnabled;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (BOOL)debuggingEnabled;
- (void)setFastMathEnabled:(BOOL)arg1;
- (BOOL)fastMathEnabled;
- (void)importDictionary:(id)arg1;
- (id)exportDictionary;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)setLanguageVersion:(unsigned long long)arg1;
- (void)setAdditionalCompilerArguments:(id)arg1;
- (id)additionalCompilerArguments;
- (void)setPreprocessorMacros:(id)arg1;
- (id)preprocessorMacros;
- (void)setLibraries:(id)arg1;
- (id)libraries;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

