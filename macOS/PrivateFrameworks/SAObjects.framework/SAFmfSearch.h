//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SALocation;

@interface SAFmfSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SALocation *requestedLocation;
@property(copy, nonatomic) NSString *proximity;
@property(copy, nonatomic) NSArray *friends;
@property(retain, nonatomic) SALocation *currentLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

