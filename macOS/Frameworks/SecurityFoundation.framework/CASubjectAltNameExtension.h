//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CASubjectAltNameExtension : NSObject
{
    BOOL _caDoneCASubjectAltNameExts;
    struct __CE_GeneralName *_subjectAltNames;
    int _caSubjectAltNamePresent;
    int _caSubjectAltNameIsCritical;
    NSString *_caRFC822Name;
    char *_caRFC822NamesArray;
    int _caNumRFC822Names;
    NSString *_caURI;
    char *_caURIArray;
    int _caNumURIs;
    NSString *_caDNSName;
    char *_caDNSNameArray;
    int _caNumDNSNames;
    NSString *_caIPAddress;
    unsigned int *_ipAddressIntArray;
    int _caNumIPAddresses;
    int _caCertAuthoritySubjectAltNamePresent;
    int _caCertAuthoritySubjectAltNameIsCritical;
    NSString *_caCertAuthorityRFC822Name;
    NSString *_caCertAuthorityURI;
    NSString *_caCertAuthorityDNSName;
    NSString *_caCertAuthorityIPAddress;
    int _caUserSubjectAltNamePresent;
    int _caUserSubjectAltNameIsCritical;
    NSString *_caUserRFC822Name;
    NSString *_caUserURI;
    NSString *_caUserDNSName;
    NSString *_caUserIPAddress;
}

- (void)_fillInValuesInExtension:(struct __CE_DataAndType *)arg1 isCACertBeingCreated:(BOOL)arg2 extensionIsPresent:(char *)arg3;
- (void)_updatePanelToUserValues;
- (void)_saveUserPanelValues;
- (void)_updatePanelToCertAuthorityValues;
- (void)_saveCertAuthorityPanelValues;
- (BOOL)_alreadySpecifiedCertAuthorityValues;
- (void)_setAlreadySpecifiedCertAuthorityValues:(BOOL)arg1;
- (void)_setupIPAddresses:(unsigned int *)arg1 numIPAddresses:(int)arg2 inCEGeneralNames:(struct __CE_GeneralNames *)arg3;
- (void)_setupDNSNames:(id)arg1 inCEGeneralNames:(struct __CE_GeneralNames *)arg2;
- (void)_setupURIs:(id)arg1 inCEGeneralNames:(struct __CE_GeneralNames *)arg2;
- (void)_setupRFC822Names:(id)arg1 inCEGeneralNames:(struct __CE_GeneralNames *)arg2;
- (void)_releaseDNSNamesArray;
- (void)_releaseRFC822NamesArray;
- (void)_releaseURIArray;
- (BOOL)_areIPAddressesValid:(BOOL)arg1;
- (void)_setToSMIMEWithRFC822Name:(id)arg1;
- (void)_setServerDNSNameSetting:(id)arg1;
- (id)_uri;
- (void)_setURI:(id)arg1;
- (id)_dnsName;
- (void)_setDNSName:(id)arg1;
- (id)_ipAddress;
- (void)_setIPAddress:(id)arg1;
- (id)_rfc822Name;
- (void)_setRFC822Name:(id)arg1;
- (void)_setUserIPAddrs:(id)arg1;
- (void)_setUserDNSNames:(id)arg1;
- (void)_setUserURIs:(id)arg1;
- (void)_setUserRFC822Name:(id)arg1;
- (void)_setIsCritical:(id)arg1;
- (int)_isCritical;
- (void)_setIsPresent:(id)arg1;
- (int)_isPresent;
- (void)_setToDefaults;
- (void)dealloc;
- (id)init;

@end

