//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherKit/NSObject-Protocol.h>

@class NSDateComponents;

@protocol WMWeatherStoreProtocol <NSObject>
- (void)currentConditionsForCoordinate:(struct CLLocationCoordinate2D)arg1 result:(void (^)(WMWeatherData *))arg2;
- (void)currentHourlyForecastForCoordinate:(struct CLLocationCoordinate2D)arg1 result:(void (^)(NSArray *))arg2;
- (void)currentDailyForecastForCoordinate:(struct CLLocationCoordinate2D)arg1 result:(void (^)(NSArray *))arg2;
- (void)forecastForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
- (void)historicalWeatherForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
- (void)almanacWeatherForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
- (void)weatherForCoordinate:(struct CLLocationCoordinate2D)arg1 atDate:(NSDateComponents *)arg2 result:(void (^)(WMWeatherData *))arg3;
@end

