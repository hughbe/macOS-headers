//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand
{
}

+ (id)launchAppWithIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)launchAppWithIntent;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *jsonEncodedHandledIntentResponse;
@property(copy, nonatomic) NSString *jsonEncodedHandledIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *handledIntentResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *handledIntent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

