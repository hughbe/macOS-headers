//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/SRSensorKitServiceClientReading-Protocol.h>

@class SRSensorReader;

@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading>
{
    SRSensorReader *_reader;
}

+ (id)readerClientWithReader:(id)arg1;
- (void).cxx_destruct;
@property __weak SRSensorReader *reader; // @synthesize reader=_reader;
- (void)resetDatastoreFiles:(id)arg1;
- (id)initWithReader:(id)arg1;

@end

