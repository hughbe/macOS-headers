//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol INSetRadioStationIntentExport <NSObject, JSExport>
@property(copy) NSNumber *presetNumber;
@property(copy) NSString *channel;
@property(copy) NSString *stationName;
@property(copy) NSNumber *frequency;
@property long long radioType;
- (id)init;
@end

