//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOBluetoothDeviceInquiry, NSMutableSet;

@interface GCControllerMBDelegate : NSObject
{
    IOBluetoothDeviceInquiry *_inquiry;
    NSMutableSet *_pairings;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)deviceSimplePairingComplete:(id)arg1 status:(unsigned char)arg2;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned int)arg2;
- (void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned int)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)devicePairingConnecting:(id)arg1;
- (void)devicePairingStarted:(id)arg1;
- (void)deviceInquiryComplete:(id)arg1 error:(int)arg2 aborted:(BOOL)arg3;
- (void)deviceInquiryDeviceFound:(id)arg1 device:(id)arg2;
- (void)deviceInquiryStarted:(id)arg1;
- (void)stopScan;
- (void)startScan;
- (id)init;
- (void)fireCompletionHandler;
- (void)dealloc;

@end

