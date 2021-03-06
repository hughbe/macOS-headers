//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, NSXPCConnection;

@interface MFAACertificateManager : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSUserDefaults *_userDefaults;
}

+ (id)anchorCertificatesForTypes:(int)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (int)_getCachedCertStatus:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3;
- (int)_validateCertificateWithServer:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3 error:(id *)arg4;
- (int)_validateCertificateChain:(id)arg1 realtime:(BOOL)arg2 error:(id *)arg3;
- (void)requestMetadataForCertificate:(id)arg1 requestedLocale:(id)arg2 requestInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)validateCertificateChain:(id)arg1 realtime:(BOOL)arg2 error:(id *)arg3;
- (int)validateCertificate:(id)arg1 realtime:(BOOL)arg2 error:(id *)arg3;
- (void)validateCertificate:(id)arg1 realtime:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_init;
- (id)init;

@end

