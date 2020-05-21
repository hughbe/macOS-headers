//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBrightness/CBHIDService.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CBALSService : CBHIDService
{
    BOOL _validData;
    double _lux;
    BOOL _colorSupport;
    double _x;
    double _y;
    double _CCT;
    NSString *_desc;
    unsigned long long _location;
}

@property(readonly) unsigned long long location; // @synthesize location=_location;
@property(readonly) double CCT; // @synthesize CCT=_CCT;
@property(readonly) double y; // @synthesize y=_y;
@property(readonly) double x; // @synthesize x=_x;
@property(readonly) BOOL colorSupport; // @synthesize colorSupport=_colorSupport;
@property(readonly) double lux; // @synthesize lux=_lux;
@property(readonly) BOOL validData; // @synthesize validData=_validData;
- (BOOL)updateEventData;
- (id)copyDataInDictionary;
- (id)description;
- (void)setEvent:(struct __IOHIDEvent *)arg1;
- (void)resetEventData;
- (void)dealloc;
- (id)initWithHIDALSServiceClient:(struct __IOHIDServiceClient *)arg1;

@end

