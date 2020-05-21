//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtension.h>

@class NSDictionary, NSString;

@interface NSExtension (SafariNSExtensionExtras)
@property(readonly, nonatomic) NSString *safari_humanReadableDescription;
@property(readonly, nonatomic) NSString *safari_versionNumber;
@property(readonly, nonatomic) NSString *safari_displayVersion;
@property(readonly, nonatomic) NSString *safari_localizedContainingAppDisplayName;
@property(readonly, nonatomic) NSString *safari_localizedDisplayName;
@property(readonly, nonatomic) NSString *safari_developerIdentifier;
@property(readonly, nonatomic) NSDictionary *safari_untrustedCodeSigningDictionary;
- (id)safari_untrustedCodeSigningDictionaryWithCodeRef:(struct __SecCode *)arg1 failedCodeSigningRequirements:(char *)arg2;
@end

