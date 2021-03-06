//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABFaceTimeCommunicationsBridgeDelegate-Protocol.h>

@class ABFaceTimeCommunicationsBridge, NSString;
@protocol ABCollectionItemMessagingAvailabilityHelperDelegate;

@interface ABCollectionItemMessagingAvailabilityHelper : NSObject <ABFaceTimeCommunicationsBridgeDelegate>
{
    BOOL _availableForMessaging;
    ABFaceTimeCommunicationsBridge *_bridge;
    NSString *_endpoint;
    id <ABCollectionItemMessagingAvailabilityHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ABCollectionItemMessagingAvailabilityHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic, getter=isAvailableForMessaging) BOOL availableForMessaging; // @synthesize availableForMessaging=_availableForMessaging;
@property(retain, nonatomic) ABFaceTimeCommunicationsBridge *bridge; // @synthesize bridge=_bridge;
- (void)faceTimeCommunicationsBridge:(id)arg1 messagingAvailabilityChanged:(BOOL)arg2 forEndpoint:(id)arg3;
- (void)startAvailabilityCheckForEndpoint:(id)arg1 property:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

