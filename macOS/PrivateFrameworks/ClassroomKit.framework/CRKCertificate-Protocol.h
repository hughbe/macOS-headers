//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKKeychainItem-Protocol.h>

@class NSArray, NSData, NSDateInterval, NSString;

@protocol CRKCertificate <CRKKeychainItem>
@property(readonly, nonatomic) struct __SecCertificate *underlyingCertificate;
@property(readonly, nonatomic) long long keySizeInBits;
@property(readonly, nonatomic) unsigned int hashingAlgorithm;
@property(readonly, nonatomic, getter=isCertificateAuthority) BOOL certificateAuthority;
@property(readonly, nonatomic, getter=isTemporallyValid) BOOL temporallyValid;
@property(readonly, nonatomic) NSDateInterval *validityDateInterval;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
@property(readonly, copy, nonatomic) NSString *fingerprint;
@property(readonly, copy, nonatomic) NSArray *commonNames;
@end

