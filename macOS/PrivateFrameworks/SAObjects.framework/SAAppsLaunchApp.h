//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAppsLaunchApp : SABaseClientBoundCommand
{
}

+ (id)launchAppWithDictionary:(id)arg1 context:(id)arg2;
+ (id)launchApp;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *launchId;
@property(copy, nonatomic) NSString *executionEnvironment;
@property(copy, nonatomic) NSString *applicationClientIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

