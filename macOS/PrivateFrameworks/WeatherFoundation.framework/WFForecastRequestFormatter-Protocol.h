//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSDateComponents, NSLocale, NSURL, NSURLRequest, WFLocation, WFRequestFormattingRules;

@protocol WFForecastRequestFormatter <NSObject>
+ (NSURL *)hostURLForService;
+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 date:(NSDateComponents *)arg4 rules:(WFRequestFormattingRules *)arg5;
+ (NSURLRequest *)forecastRequest:(unsigned long long)arg1 forLocation:(WFLocation *)arg2 locale:(NSLocale *)arg3 date:(NSDateComponents *)arg4;
@end

