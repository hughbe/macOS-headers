//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NWNetworkAgent-Protocol.h>

@class NSData, NSPAppRule, NSPConfiguration, NSString, NSUUID;

@interface NSPNetworkAgent : NSObject <NWNetworkAgent>
{
    unsigned char _dataDigest[32];
    BOOL active;
    BOOL kernelActivated;
    BOOL userActivated;
    BOOL voluntary;
    NSUUID *agentUUID;
    NSString *agentDescription;
    NSPConfiguration *_configuration;
    NSPAppRule *_appRule;
    NSData *_keybag;
    NSData *_agentData;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
- (void).cxx_destruct;
@property(retain) NSData *agentData; // @synthesize agentData=_agentData;
@property(retain) NSData *keybag; // @synthesize keybag=_keybag;
@property(retain) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(retain) NSPConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic, getter=isVoluntary) BOOL voluntary; // @synthesize voluntary;
@property(nonatomic, getter=isUserActivated) BOOL userActivated; // @synthesize userActivated;
@property(nonatomic, getter=isKernelActivated) BOOL kernelActivated; // @synthesize kernelActivated;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active;
@property(copy, nonatomic) NSString *agentDescription; // @synthesize agentDescription;
@property(copy, nonatomic) NSUUID *agentUUID; // @synthesize agentUUID;
- (void)parseAgentData;
- (id)copyAgentData;
- (BOOL)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property(nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property(nonatomic) BOOL requiresAssert;
@property(nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property(nonatomic) BOOL supportsBrowseRequests;
@property(nonatomic) BOOL supportsResolveRequests;
@property(nonatomic) BOOL updateClientsImmediately;

@end

