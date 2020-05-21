//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFSettingsClient.h>

#import <ActionKit/WFBooleanStateSetting-Protocol.h>

@class BluetoothManager, NSString;

@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting>
{
    BluetoothManager *_manager;
    CDUnknownBlockType _availabilityCompletion;
}

+ (void)createClientWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType availabilityCompletion; // @synthesize availabilityCompletion=_availabilityCompletion;
@property(readonly, nonatomic) BluetoothManager *manager; // @synthesize manager=_manager;
- (void)setState:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterForAvailabilityNotifications;
- (void)registerForAvailabilityNotifications;
- (void)availabilityChanged:(id)arg1;
- (void)waitForAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBluetoothManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

