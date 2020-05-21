//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FlightUtilities/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FUFlightFactoryProtocol <NSObject>
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(NSString *)arg2 date:(NSDate *)arg3 dateType:(long long)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(NSString *)arg2 date:(NSDate *)arg3 dateType:(long long)arg4 userAgent:(NSString *)arg5 sessionID:(NSString *)arg6 completionHandler:(void (^)(NSArray *, NSError *))arg7;
@end

