//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXTaskContextMutating-Protocol.h>

@class NSError, NSString, NSUUID, SVXActivationContext, SVXDeactivationContext, SVXTaskContext;

@interface _SVXTaskContextMutation : NSObject <SVXTaskContextMutating>
{
    SVXTaskContext *_baseModel;
    long long _origin;
    unsigned long long _timestamp;
    NSUUID *_sessionUUID;
    NSUUID *_requestUUID;
    NSString *_aceId;
    NSString *_refId;
    NSString *_dialogIdentifier;
    NSString *_dialogPhase;
    BOOL _isUUFR;
    BOOL _listensAfterSpeaking;
    SVXActivationContext *_activationContext;
    SVXDeactivationContext *_deactivationContext;
    NSError *_error;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasOrigin:1;
        unsigned int hasTimestamp:1;
        unsigned int hasSessionUUID:1;
        unsigned int hasRequestUUID:1;
        unsigned int hasAceId:1;
        unsigned int hasRefId:1;
        unsigned int hasDialogIdentifier:1;
        unsigned int hasDialogPhase:1;
        unsigned int hasIsUUFR:1;
        unsigned int hasListensAfterSpeaking:1;
        unsigned int hasActivationContext:1;
        unsigned int hasDeactivationContext:1;
        unsigned int hasError:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setError:(id)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setActivationContext:(id)arg1;
- (void)setListensAfterSpeaking:(BOOL)arg1;
- (void)setIsUUFR:(BOOL)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (void)setRefId:(id)arg1;
- (void)setAceId:(id)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setOrigin:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

