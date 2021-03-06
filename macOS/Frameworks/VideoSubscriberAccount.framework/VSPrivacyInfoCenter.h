//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSPrivacyInfoCenter : NSObject
{
    int _registrationToken;
    long long _accountAccessStatus;
}

+ (id)sharedPrivacyInfoCenter;
@property(nonatomic) int registrationToken; // @synthesize registrationToken=_registrationToken;
@property(nonatomic) long long accountAccessStatus; // @synthesize accountAccessStatus=_accountAccessStatus;
- (id)updateAccountAccessStatusWithError:(id)arg1;
- (void)updateAccountAccessStatusWithResponse:(id)arg1;
- (void)_invalidateAccountAccessStatus;
- (void)dealloc;
- (id)init;

@end

