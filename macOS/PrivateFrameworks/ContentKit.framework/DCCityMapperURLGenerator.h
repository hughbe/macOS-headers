//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/DCMapsURLGenerator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DCCityMapperURLGenerator : DCMapsURLGenerator
{
    NSString *_startCoordinate;
    NSString *_endCoordinate;
}

+ (void)generateURLWithMapsLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(retain, nonatomic) NSString *startCoordinate; // @synthesize startCoordinate=_startCoordinate;
- (void)populateQueryDictionary;
- (id)path;
- (id)host;
- (id)scheme;

@end

