//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSNumber, NSString, NSURL, SAEmail, SALocation, SAPhone;

@interface SAABPersonSearch : SADomainCommand
{
}

+ (id)personSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personSearch;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *scope;
@property(copy, nonatomic) NSString *relationship;
@property(retain, nonatomic) SAPhone *phone;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSNumber *me;
@property(retain, nonatomic) SAEmail *email;
@property(copy, nonatomic) NSString *company;
@property(copy, nonatomic) NSDate *birthday;
@property(retain, nonatomic) SALocation *address;
@property(copy, nonatomic) NSURL *accountIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

