//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IACardDAVAccountSetupInput : IAAccountSetupInput
{
    NSString *_serverAddress;
    NSString *_autoHostname;
    NSString *_autoSchema;
    BOOL _migrateLocalData;
    NSString *_emailAddress;
}

- (void).cxx_destruct;
@property(retain) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property BOOL migrateLocalData; // @synthesize migrateLocalData=_migrateLocalData;
@property(retain) NSString *autoSchema; // @synthesize autoSchema=_autoSchema;
@property(retain) NSString *autoHostname; // @synthesize autoHostname=_autoHostname;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;

@end

