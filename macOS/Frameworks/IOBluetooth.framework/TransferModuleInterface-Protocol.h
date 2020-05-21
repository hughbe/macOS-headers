//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IOBluetoothOBEXSession, NSString;

@protocol TransferModuleInterface
- (int)putFileToRemote:(NSString *)arg1;
- (int)getRemoteFileNamed:(NSString *)arg1 toLocalPathAndName:(NSString *)arg2;
- (BOOL)isConnected;
- (void)abortAction:(id)arg1;
- (void)disconnect;
- (void)connect;
- (void)setConnectionID:(unsigned int)arg1;
- (void)setOBEXSession:(IOBluetoothOBEXSession *)arg1;
- (void)setEventTarget:(id)arg1 andSelector:(SEL)arg2;
@end

