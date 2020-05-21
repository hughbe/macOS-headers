//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVBInterface, NSString;
@protocol OS_dispatch_queue;

@interface AVBMRP : NSObject
{
    unsigned int service;
    struct IONotificationPort *notificationPort;
    NSString *interfaceName;
    unsigned int notification;
    unsigned int connection;
    NSObject<OS_dispatch_queue> *callbackQueue;
    AVBInterface *interface;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
+ (id)IOClassName;
@property AVBInterface *interface; // @synthesize interface;
- (void)dealloc;
- (void)finalize;
- (void)serviceTerminated;
- (id)remoteAttributes;
- (id)localAttributes;
- (BOOL)sendPreregisteredAttributes;
- (void)callbackWithArgs:(unsigned long long *)arg1 argCount:(unsigned int)arg2;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)commonInit;

@end

