//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDSSignInServiceUserStatus : NSObject
{
    unsigned long long _serviceType;
    NSArray *_serviceUserInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *serviceUserInfos; // @synthesize serviceUserInfos=_serviceUserInfos;
@property(readonly, nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) unsigned long long appleIDUserStatus;
@property(readonly, nonatomic) unsigned long long phoneUserStatus;
- (id)description;
- (id)initWithServiceType:(unsigned long long)arg1 userInfos:(id)arg2;

@end

