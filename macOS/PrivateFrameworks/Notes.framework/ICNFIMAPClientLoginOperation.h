//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFIMAPSingleClientOperation.h>

@class NSString;

@interface ICNFIMAPClientLoginOperation : ICNFIMAPSingleClientOperation
{
    NSString *_username;
    NSString *_quotedUsername;
    NSString *_password;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *quotedUsername; // @synthesize quotedUsername=_quotedUsername;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)handlesAllUntaggedResponses;
- (id)debugCommandString;
- (id)activityString;
- (id)commandTypeString;
- (id)init;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end

