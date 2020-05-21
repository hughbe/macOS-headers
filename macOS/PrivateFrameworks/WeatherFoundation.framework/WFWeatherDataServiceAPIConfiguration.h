//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFAPIConfigurationProtocol-Protocol.h>

@class NSString;
@protocol WFForecastDataParser;

@interface WFWeatherDataServiceAPIConfiguration : NSObject <WFAPIConfigurationProtocol>
{
    Class _forecastRequestFormatterClass;
    id <WFForecastDataParser> _forecastParser;
    NSString *_environment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) id <WFForecastDataParser> forecastParser; // @synthesize forecastParser=_forecastParser;
@property(retain, nonatomic) Class forecastRequestFormatterClass; // @synthesize forecastRequestFormatterClass=_forecastRequestFormatterClass;
@property(readonly, nonatomic) BOOL isValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)hostUrl;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id *)arg4 rules:(id)arg5;
- (id)initWithVersion:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

