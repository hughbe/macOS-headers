//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand
{
}

+ (id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceDomainSignal;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *domain;
@property(copy, nonatomic) NSArray *appIdHints;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

