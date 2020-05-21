//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BiometricKitXPCExportedClientObject;

@interface BiometricOperation : NSObject
{
    int _status;
    unsigned int _cancelledMessage;
    BiometricKitXPCExportedClientObject *_client;
    long long _priority;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int cancelledMessage; // @synthesize cancelledMessage=_cancelledMessage;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) BiometricKitXPCExportedClientObject *client; // @synthesize client=_client;
@property(readonly, nonatomic) unsigned int taskResumeFailedMessage;
@property(readonly, nonatomic) unsigned int taskResumedMessage;
@property(readonly, nonatomic) unsigned int taskPausedMessage;
@property(readonly, nonatomic) int type;
- (id)description;
- (id)init;

@end

