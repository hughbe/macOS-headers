//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtension.h>

@class NSUUID;

@interface NSExtension (SafariServicesExtras)
@property(readonly, nonatomic) NSUUID *sf_uniqueIdentifier;
@property(readonly, nonatomic) BOOL sf_containingAppIsValidAppBundle;
- (id)sf_untrustedCodeSigningDictionaryFromCodeRef:(struct __SecCode *)arg1 enforcingCodeSigningRequirement:(BOOL)arg2 skipValidityCheck:(BOOL)arg3 failedCodeSigningRequirements:(char *)arg4;
- (id)sf_untrustedCodeSigningDictionaryFromCodeRef:(struct __SecCode *)arg1 enforcingCodeSigningRequirement:(BOOL)arg2 skipValidityCheck:(BOOL)arg3;
- (id)sf_untrustedCodeSigningDictionaryEnforcingCodeSigningRequirement:(BOOL)arg1 skipValidityCheck:(BOOL)arg2;
@property(readonly, nonatomic) struct __SecCode *sf_createUntrustedCodeRef;
- (struct __SecCode *)_sf_createUntrustedCodeRefForURL:(id)arg1;
@end

