//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand
{
}

+ (id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recipientSearch;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *recipients;
@property(nonatomic) BOOL clientShouldResolvePhonesAndEmails;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

