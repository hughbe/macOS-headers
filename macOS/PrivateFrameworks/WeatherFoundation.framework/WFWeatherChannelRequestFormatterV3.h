//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastRequestFormatter-Protocol.h>

@class NSString;

@interface WFWeatherChannelRequestFormatterV3 : NSObject <WFForecastRequestFormatter>
{
}

+ (id)forecastRequestForComponents:(id)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5;
+ (id)forecastRequest:(id)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 queryItems:(id)arg5 rules:(id)arg6;
+ (id)hostURLForService;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 rules:(id)arg5;
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

