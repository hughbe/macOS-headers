//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKKeychainItem-Protocol.h>

@protocol CRKCertificate;

@protocol CRKTrust <CRKKeychainItem>
@property(readonly, nonatomic) struct __SecTrust *underlyingTrust;
@property(readonly, nonatomic) id <CRKCertificate> leafCertificate;
@end

