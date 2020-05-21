//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription>
{
    struct netagent *_internalNetagent;
}

@property struct netagent *internalNetagent; // @synthesize internalNetagent=_internalNetagent;
- (BOOL)supportsResolve;
- (BOOL)requiresAssert;
- (BOOL)supportsBrowse;
- (BOOL)isNexusProvider;
@property(readonly, nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property(readonly, nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property(readonly, nonatomic, getter=isVoluntary) BOOL voluntary;
@property(readonly, nonatomic, getter=isUserActivated) BOOL userActivated;
@property(readonly, nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic) NSUUID *agentUUID;
@property(readonly, nonatomic) NSString *agentDescription;
@property(readonly, nonatomic) NSString *agentType;
@property(readonly, nonatomic) NSString *agentDomain;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (void)dealloc;
- (id)initWithKernelAgent:(const struct netagent *)arg1;

@end

