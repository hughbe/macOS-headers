//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ILCConnection, NSArray, NSDictionary, NSError, NSString;

@protocol ILCConnectionDelegate
- (void)connectionDidEnd:(ILCConnection *)arg1;
- (void)connectionDidFail:(ILCConnection *)arg1 error:(NSError *)arg2;
- (void)connectionDidConnect:(ILCConnection *)arg1;
- (void)connectionDidStart:(ILCConnection *)arg1;

@optional
- (void)playAudioQueueWithOptionalString:(NSString *)arg1;
- (void)sysdiagnoseDidSucceedForFiles:(NSArray *)arg1;
- (void)sysdiagnoseDidFailForFiles:(NSArray *)arg1;
- (void)gatherSysdiagnoseDataWithHandles:(NSDictionary *)arg1;
- (NSArray *)sysdiganoseFilenames;
- (void)rebootMachine;
@end

