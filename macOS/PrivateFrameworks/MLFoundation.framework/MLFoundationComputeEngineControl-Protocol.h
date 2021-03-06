//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLFoundation/NSObject-Protocol.h>

@class MLFoundationTensor, NSArray, NSData;

@protocol MLFoundationComputeEngineControl <NSObject>
@property(readonly, nonatomic) NSArray *deviceList;
- (void)waitForAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)waitForOthers;
- (void)signalAllDevicesExcludingDevice:(unsigned long long)arg1 eventValue:(unsigned long long)arg2;
- (void)signalNextEvent;
- (void)commitWithCompletionHandler:(void (^)(NSError *, MLFoundationTensor *, double))arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(NSData *)arg3 graphResultTensor:(MLFoundationTensor *)arg4;
- (void)commitAndWaitForCompletion:(void (^)(NSError *, MLFoundationTensor *, double))arg1 enableProfiling:(BOOL)arg2 graphExecutionTime:(NSData *)arg3 graphResultTensor:(MLFoundationTensor *)arg4;
- (void)commitAndWaitForCompletion:(void (^)(NSError *, MLFoundationTensor *, double))arg1;
- (void)commitWithProfiling:(BOOL)arg1 graphExecutionTime:(NSData *)arg2;
- (void)synchronizeTensor:(MLFoundationTensor *)arg1;
- (void)partitionTensor:(MLFoundationTensor *)arg1;
- (void)dispatchWriteTensor:(MLFoundationTensor *)arg1 toDeviceIndex:(unsigned long long)arg2 sourceBuffer:(void *)arg3;
- (void)dispatchWriteTensor:(MLFoundationTensor *)arg1 toDeviceIndex:(unsigned long long)arg2;
- (void)writeTensor:(MLFoundationTensor *)arg1 toDeviceIndex:(unsigned long long)arg2 sourceBuffer:(void *)arg3;
- (void)writeTensor:(MLFoundationTensor *)arg1 toDeviceIndex:(unsigned long long)arg2;
- (void)broadcastTensor:(MLFoundationTensor *)arg1 sourceBuffer:(void *)arg2 allocate:(BOOL)arg3;
- (void)broadcastTensor:(MLFoundationTensor *)arg1 allocate:(BOOL)arg2;
- (void)dispatchBroadcastTensor:(MLFoundationTensor *)arg1;
- (void)broadcastTensor:(MLFoundationTensor *)arg1;
- (void)readTensor:(MLFoundationTensor *)arg1 fromDeviceIndex:(unsigned long long)arg2 targetBuffer:(void *)arg3;
- (NSData *)readTensor:(MLFoundationTensor *)arg1 fromDeviceIndex:(unsigned long long)arg2;
- (void)deallocateDeviceMemoryForTensor:(MLFoundationTensor *)arg1;
- (void)allocateDeviceMemoryForTensor:(MLFoundationTensor *)arg1;
- (void)deviceHeapAllocatorWithHeapSize:(unsigned long long)arg1;
- (unsigned long long)deviceMemorySizeForTensor:(MLFoundationTensor *)arg1;
- (unsigned long long)numberOfDevices;
@end

