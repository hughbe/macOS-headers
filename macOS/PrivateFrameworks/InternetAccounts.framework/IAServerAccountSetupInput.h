//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IAServerAccountSetupInput : IAAccountSetupInput
{
    NSString *_serverName;
    NSString *_serverAddress;
    BOOL _enableMail;
    BOOL _enableJabber;
    BOOL _enableCalDAV;
    BOOL _enableCardDAV;
    BOOL _enableVPN;
}

- (void).cxx_destruct;
@property BOOL enableVPN; // @synthesize enableVPN=_enableVPN;
@property BOOL enableCardDAV; // @synthesize enableCardDAV=_enableCardDAV;
@property BOOL enableCalDAV; // @synthesize enableCalDAV=_enableCalDAV;
@property BOOL enableJabber; // @synthesize enableJabber=_enableJabber;
@property BOOL enableMail; // @synthesize enableMail=_enableMail;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain) NSString *serverName; // @synthesize serverName=_serverName;

@end

