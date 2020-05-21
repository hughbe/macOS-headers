//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BiometricKitXPCExportedObject, NSDictionary;

@interface BiometricKitXPCExportedClientObject : NSObject
{
    unsigned long long _clientID;
    NSDictionary *_clientInfo;
    BiometricKitXPCExportedObject *_exportedObject;
    BOOL _delegateRegistered;
    BOOL _clientAppIsBackground;
    BOOL _clientAppIsInactive;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL clientAppIsInactive; // @synthesize clientAppIsInactive=_clientAppIsInactive;
@property(readonly, nonatomic) BOOL clientAppIsBackground; // @synthesize clientAppIsBackground=_clientAppIsBackground;
@property(readonly, nonatomic) BOOL delegateRegistered; // @synthesize delegateRegistered=_delegateRegistered;
@property(readonly, copy, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) unsigned long long clientID; // @synthesize clientID=_clientID;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(id)arg1 details:(id)arg2;
- (void)touchIDButtonPressed:(BOOL)arg1;
- (void)homeButtonPressed;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2;
- (void)statusMessage:(unsigned int)arg1;
- (void)matchResult:(id)arg1 details:(id)arg2;
- (void)enrollFeedback:(id)arg1;
- (void)enrollUpdate:(id)arg1;
- (void)enrollResult:(id)arg1;
@property(readonly, nonatomic) __weak BiometricKitXPCExportedObject *exportedObject;
- (void)setClientAppIsInactive:(BOOL)arg1;
- (void)setClientAppIsBackground:(BOOL)arg1;
- (void)setDelegateRegistered:(BOOL)arg1;
- (id)description;
- (id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3;

@end

