//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingCommand.h>

@class NSString;

@interface SASettingSetAirPlayRoute : SASettingCommand
{
}

+ (id)setAirPlayRouteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAirPlayRoute;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *routeType;
@property(copy, nonatomic) NSString *hashedRouteId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

