//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ACFCertificateStoragePolicy, ACFCryptographProtocol, ACFKeychainManagerProtocol;

__attribute__((visibility("hidden")))
@interface ACFComponents : NSObject
{
    id <ACFCryptographProtocol> _cryptograph;
    id <ACFKeychainManagerProtocol> _keychainManager;
    id <ACFCertificateStoragePolicy> _certificateStoragePolicy;
    Class _transportClass;
    Class _localAuthenticationContextClass;
}

+ (void)setComponents:(id)arg1;
+ (id)defaultComponents;
+ (id)components;
@property(retain, nonatomic) Class localAuthenticationContextClass; // @synthesize localAuthenticationContextClass=_localAuthenticationContextClass;
@property(retain, nonatomic) Class transportClass; // @synthesize transportClass=_transportClass;
@property(retain, nonatomic) id <ACFCertificateStoragePolicy> certificateStoragePolicy; // @synthesize certificateStoragePolicy=_certificateStoragePolicy;
@property(retain, nonatomic) id <ACFCryptographProtocol> cryptograph; // @synthesize cryptograph=_cryptograph;
@property(retain, nonatomic) id <ACFKeychainManagerProtocol> keychainManager; // @synthesize keychainManager=_keychainManager;
- (id)createLocalAuthenticationContext;
- (id)createTransport;
- (void)dealloc;

@end

