//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface AKDeviceListDeltaMessagePayload : NSObject
{
    NSString *_altDSID;
    unsigned long long _operation;
    NSString *_machineID;
    NSArray *_machineIDs;
    NSString *_serialNumber;
    NSDate *_timestamp;
}

- (void).cxx_destruct;
@property(readonly, copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy) NSArray *machineIDs; // @synthesize machineIDs=_machineIDs;
@property(readonly, copy) NSString *machineID; // @synthesize machineID=_machineID;
@property(readonly) unsigned long long operation; // @synthesize operation=_operation;
@property(readonly, copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (unsigned long long)_convertOperationToEnum:(id)arg1;
- (id)initWithResponseBody:(id)arg1;

@end

