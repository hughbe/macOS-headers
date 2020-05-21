//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject
{
    NSMutableArray *_credentials;
    NSMutableArray *_completedCredentials;
    unsigned long long _currentIndex;
}

- (void).cxx_destruct;
- (unsigned long long)completedCount;
- (unsigned long long)remaining;
- (unsigned long long)count;
- (void)setCurrentCredential:(id)arg1;
- (id)nextCredentialToProvision;
- (void)removeCredential:(id)arg1;
- (void)setCredentialsToProvision:(id)arg1;
- (id)init;

@end

