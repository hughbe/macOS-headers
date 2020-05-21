//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSArray, NSNumber, NSObject, NSString;
@protocol OS_dispatch_group;

@interface HMDServiceTransaction : HMDBackingStoreModelObject
{
    NSString *_lastSeenConfiguredNameLocal;
    NSObject<OS_dispatch_group> *_configurationTracker;
}

+ (id)properties;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker; // @synthesize configurationTracker=_configurationTracker;
@property(retain, nonatomic) NSString *lastSeenConfiguredNameLocal; // @synthesize lastSeenConfiguredNameLocal=_lastSeenConfiguredNameLocal;

// Remaining properties
@property(retain, nonatomic) NSString *associatedServiceType; // @dynamic associatedServiceType;
@property(retain, nonatomic) NSArray *characteristics; // @dynamic characteristics;
@property(retain, nonatomic) NSNumber *configurationState; // @dynamic configurationState;
@property(retain, nonatomic) NSString *expectedConfiguredName; // @dynamic expectedConfiguredName;
@property(retain, nonatomic) NSNumber *hidden; // @dynamic hidden;
@property(retain, nonatomic) NSNumber *instanceID; // @dynamic instanceID;
@property(retain, nonatomic) NSNumber *labelIndex; // @dynamic labelIndex;
@property(retain, nonatomic) NSNumber *labelNamespace; // @dynamic labelNamespace;
@property(retain, nonatomic) NSNumber *lastKnownDiscoveryMode; // @dynamic lastKnownDiscoveryMode;
@property(retain, nonatomic) NSArray *linkedServices; // @dynamic linkedServices;
@property(retain, nonatomic) NSArray *mediaSourceDisplayOrder; // @dynamic mediaSourceDisplayOrder;
@property(retain, nonatomic) NSNumber *mediaSourceIdentifier; // @dynamic mediaSourceIdentifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *primary; // @dynamic primary;
@property(retain, nonatomic) NSString *providedName; // @dynamic providedName;
@property(retain, nonatomic) NSString *serviceSubtype; // @dynamic serviceSubtype;
@property(retain, nonatomic) NSString *serviceType; // @dynamic serviceType;

@end

