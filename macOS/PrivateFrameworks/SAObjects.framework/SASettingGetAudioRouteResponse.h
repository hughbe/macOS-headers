//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingResponse.h>

@class SASettingAudioRoute;

@interface SASettingGetAudioRouteResponse : SASettingResponse
{
}

+ (id)getAudioRouteResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAudioRouteResponse;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SASettingAudioRoute *audioRoute;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

