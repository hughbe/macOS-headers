//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HIDDisplayIOReportingInterface : HIDDisplayInterface
{
    NSDictionary *_usageElementMap;
    CDUnknownBlockType _dataHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)activate;
- (_Bool)setOutputData:(id)arg1 error:(id *)arg2;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInputDataHandler:(CDUnknownBlockType)arg1;
- (id)getHIDDevices;
- (BOOL)setupIOReporting;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithContainerID:(id)arg1;

@end

