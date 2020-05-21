//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SiriClientFlow/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface CFVSGetVoiceAssetsResponse : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getVoiceAssetsResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getVoiceAssetsResponse;
@property(copy, nonatomic) NSArray *voiceAssets;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

