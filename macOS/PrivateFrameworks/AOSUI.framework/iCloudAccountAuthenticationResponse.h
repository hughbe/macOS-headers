//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/iCloudAccountResponse.h>

@class NSDictionary, NSString;

@interface iCloudAccountAuthenticationResponse : iCloudAccountResponse
{
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *HSAData;
@property(readonly, nonatomic) NSString *HSAAction;
@property(readonly, nonatomic) NSString *altDSID;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) NSString *fmipLostModeToken;
@property(readonly, nonatomic) NSString *cloudKitToken;
@property(readonly, nonatomic) NSString *hsaToken;
@property(readonly, nonatomic) NSString *mapsToken;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *fmipToken;
@property(readonly, nonatomic) NSString *fmfAppToken;
@property(readonly, nonatomic) NSString *fmfToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

