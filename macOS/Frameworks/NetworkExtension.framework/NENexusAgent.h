//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NWNetworkAgent-Protocol.h>

@class NSString, NSUUID, NWNetworkAgentRegistration;
@protocol NENexusAgentDelegate;

@interface NENexusAgent : NSObject <NWNetworkAgent>
{
    BOOL active;
    BOOL supportsBrowseRequests;
    BOOL nexusProvider;
    unsigned int _frameType;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NWNetworkAgentRegistration *_registration;
    NSObject<NENexusAgentDelegate> *_delegate;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
- (void).cxx_destruct;
@property __weak NSObject<NENexusAgentDelegate> *delegate; // @synthesize delegate=_delegate;
@property unsigned int frameType; // @synthesize frameType=_frameType;
@property(retain) NWNetworkAgentRegistration *registration; // @synthesize registration=_registration;
@property(nonatomic, getter=isNexusProvider) BOOL nexusProvider; // @synthesize nexusProvider;
@property(nonatomic) BOOL supportsBrowseRequests; // @synthesize supportsBrowseRequests;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)unassertAgentWithOptions:(id)arg1;
- (BOOL)assertAgentWithOptions:(id)arg1;
- (BOOL)startAgentWithOptions:(id)arg1;
- (void)closeNexusWithOptions:(id)arg1;
- (BOOL)requestNexusWithOptions:(id)arg1;
@property(nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property(nonatomic, getter=isUserActivated) BOOL userActivated;
@property(nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property(nonatomic, getter=isVoluntary) BOOL voluntary;
- (id)copyAgentData;

// Remaining properties
@property(nonatomic) BOOL requiresAssert;
@property(nonatomic) BOOL supportsResolveRequests;
@property(nonatomic) BOOL updateClientsImmediately;

@end

