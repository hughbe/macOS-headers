//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMUserProfileProvider.h>

#import <Mail/EMUserProfileProviderSubclassMethods-Protocol.h>

@class NSString;

@interface MFUserProfileProvider_macOS : EMUserProfileProvider <EMUserProfileProviderSubclassMethods>
{
}

+ (id)defaultProvider;
- (id)_accountsEmailAddresses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

