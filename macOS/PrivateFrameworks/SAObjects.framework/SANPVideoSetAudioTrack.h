//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand
{
}

+ (id)setAudioTrackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAudioTrack;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *languageOptionChangeUserSetting;
@property(copy, nonatomic) NSString *desiredOptionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

