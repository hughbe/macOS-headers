//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSArray, NSString;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectRetrieveWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectRetrieve;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *identifiers;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

