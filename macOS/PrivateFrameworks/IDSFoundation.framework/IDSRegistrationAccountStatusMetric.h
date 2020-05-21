//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTAWDMetric-Protocol.h>
#import <IDSFoundation/CUTRTCMetric-Protocol.h>

@class NSDictionary, NSString, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTRTCMetric, CUTAWDMetric>
{
    BOOL _doesExist;
    BOOL _isEnabled;
    BOOL _isUserDisabled;
    BOOL _doesMatchiCloudAccount;
    BOOL _isiCloudSignedIn;
    BOOL _isiTunesSignedIn;
    BOOL _hasEverRegistered;
    BOOL _areAllAliasesSelected;
    BOOL _areAllSelectedAliasesRegistered;
    BOOL _isProdEnvironment;
    int _accountType;
    int _registrationErrorReason;
    int _accountRegistrationStatus;
    NSString *_serviceIdentifier;
    long long _registrationError;
    long long _registrationStatus;
    long long _lastRegistrationFailureError;
    double _timeIntervalSinceLastRegistrationFailure;
    double _timeIntervalSinceLastRegistrationSuccess;
    long long _accountSecurityLevel;
    long long _numberOfSelected;
    long long _numberOfVetted;
    long long _numberOfUnselectReasonUnknown;
    long long _numberOfUnselectReasonAlertDenial;
    long long _numberOfUnselectReasonClientCall;
    long long _numberOfUnselectReasonBadAlias;
    long long _numberOfUnselectReasonUpdateInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfUnselectReasonUpdateInfo; // @synthesize numberOfUnselectReasonUpdateInfo=_numberOfUnselectReasonUpdateInfo;
@property(readonly, nonatomic) long long numberOfUnselectReasonBadAlias; // @synthesize numberOfUnselectReasonBadAlias=_numberOfUnselectReasonBadAlias;
@property(readonly, nonatomic) long long numberOfUnselectReasonClientCall; // @synthesize numberOfUnselectReasonClientCall=_numberOfUnselectReasonClientCall;
@property(readonly, nonatomic) long long numberOfUnselectReasonAlertDenial; // @synthesize numberOfUnselectReasonAlertDenial=_numberOfUnselectReasonAlertDenial;
@property(readonly, nonatomic) long long numberOfUnselectReasonUnknown; // @synthesize numberOfUnselectReasonUnknown=_numberOfUnselectReasonUnknown;
@property(readonly, nonatomic) long long numberOfVetted; // @synthesize numberOfVetted=_numberOfVetted;
@property(readonly, nonatomic) long long numberOfSelected; // @synthesize numberOfSelected=_numberOfSelected;
@property(readonly, nonatomic) BOOL isProdEnvironment; // @synthesize isProdEnvironment=_isProdEnvironment;
@property(readonly, nonatomic) BOOL areAllSelectedAliasesRegistered; // @synthesize areAllSelectedAliasesRegistered=_areAllSelectedAliasesRegistered;
@property(readonly, nonatomic) BOOL areAllAliasesSelected; // @synthesize areAllAliasesSelected=_areAllAliasesSelected;
@property(readonly, nonatomic) long long accountSecurityLevel; // @synthesize accountSecurityLevel=_accountSecurityLevel;
@property(readonly, nonatomic) double timeIntervalSinceLastRegistrationSuccess; // @synthesize timeIntervalSinceLastRegistrationSuccess=_timeIntervalSinceLastRegistrationSuccess;
@property(readonly, nonatomic) double timeIntervalSinceLastRegistrationFailure; // @synthesize timeIntervalSinceLastRegistrationFailure=_timeIntervalSinceLastRegistrationFailure;
@property(readonly, nonatomic) BOOL hasEverRegistered; // @synthesize hasEverRegistered=_hasEverRegistered;
@property(readonly, nonatomic) long long lastRegistrationFailureError; // @synthesize lastRegistrationFailureError=_lastRegistrationFailureError;
@property(readonly, nonatomic) int accountRegistrationStatus; // @synthesize accountRegistrationStatus=_accountRegistrationStatus;
@property(readonly, nonatomic) long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;
@property(readonly, nonatomic) int registrationErrorReason; // @synthesize registrationErrorReason=_registrationErrorReason;
@property(readonly, nonatomic) long long registrationError; // @synthesize registrationError=_registrationError;
@property(readonly, nonatomic) BOOL isiTunesSignedIn; // @synthesize isiTunesSignedIn=_isiTunesSignedIn;
@property(readonly, nonatomic) BOOL isiCloudSignedIn; // @synthesize isiCloudSignedIn=_isiCloudSignedIn;
@property(readonly, nonatomic) BOOL doesMatchiCloudAccount; // @synthesize doesMatchiCloudAccount=_doesMatchiCloudAccount;
@property(readonly, nonatomic) BOOL isUserDisabled; // @synthesize isUserDisabled=_isUserDisabled;
@property(readonly, nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) BOOL doesExist; // @synthesize doesExist=_doesExist;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(readonly) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(BOOL)arg3 isEnabled:(BOOL)arg4 isUserDisabled:(BOOL)arg5 isiCloudSignedIn:(BOOL)arg6 doesMatchiCloudAccount:(BOOL)arg7 isiTunesSignedIn:(BOOL)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10 registrationStatus:(long long)arg11 accountRegistrationStatus:(int)arg12 hasEverRegistered:(BOOL)arg13 lastRegistrationFailureError:(long long)arg14 timeIntervalSinceLastRegistrationFailure:(double)arg15 timeIntervalSinceLastRegistrationSuccess:(double)arg16 accountSecurityLevel:(long long)arg17 areAllAliasesSelected:(BOOL)arg18 areAllSelectedAliasesRegistered:(BOOL)arg19 numberOfSelected:(long long)arg20 numberOfVetted:(long long)arg21 numberOfUnselectReasonUnknown:(long long)arg22 numberOfUnselectReasonAlertDenial:(long long)arg23 numberOfUnselectReasonClientCall:(long long)arg24 numberOfUnselectReasonBadAlias:(long long)arg25 numberOfUnselectReasonUpdateInfo:(long long)arg26 isProdEnvironment:(BOOL)arg27;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

