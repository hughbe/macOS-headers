//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface OS_remote_device : NSObject
{
    char *device_name;
    unsigned int _state;
    unsigned int _type;
    NSObject<OS_dispatch_queue> *_dq;
    NSObject<OS_xpc_object> *_properties;
    char *_uuid;
    unsigned long long _device_id;
    unsigned long long _messaging_protocol_version;
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _connected_callback;
    NSObject<OS_dispatch_queue> *_connected_callback_queue;
    OS_remote_device *_connected_callback_self_retain;
    CDUnknownBlockType _disconnected_callback;
    NSObject<OS_dispatch_queue> *_disconnected_callback_queue;
    OS_remote_device *_disconnected_callback_self_retain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OS_remote_device *disconnected_callback_self_retain; // @synthesize disconnected_callback_self_retain=_disconnected_callback_self_retain;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *disconnected_callback_queue; // @synthesize disconnected_callback_queue=_disconnected_callback_queue;
@property(copy, nonatomic) CDUnknownBlockType disconnected_callback; // @synthesize disconnected_callback=_disconnected_callback;
@property(retain, nonatomic) OS_remote_device *connected_callback_self_retain; // @synthesize connected_callback_self_retain=_connected_callback_self_retain;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connected_callback_queue; // @synthesize connected_callback_queue=_connected_callback_queue;
@property(copy, nonatomic) CDUnknownBlockType connected_callback; // @synthesize connected_callback=_connected_callback;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned long long messaging_protocol_version; // @synthesize messaging_protocol_version=_messaging_protocol_version;
@property(nonatomic) unsigned long long device_id; // @synthesize device_id=_device_id;
@property(nonatomic) char *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSObject<OS_xpc_object> *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dq; // @synthesize dq=_dq;
- (void)dealloc;
- (id)init;

@end

