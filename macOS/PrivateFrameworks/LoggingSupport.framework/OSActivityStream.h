//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCompoundPredicate, NSMutableSet, OSLogDevice, _OSLogStreamFilter;
@protocol OSActivityStreamDelegate, OSDeviceDelegate;

@interface OSActivityStream : NSObject
{
    struct os_activity_stream_s *_stream;
    NSMutableSet *_pids;
    void *_deviceSearchSession;
    void *_deviceEventSession;
    BOOL _delegateStreamErrorLess;
    BOOL _delegateStreamWithError;
    BOOL _delegateHasDidFail;
    _OSLogStreamFilter *_streamFilter;
    id <OSDeviceDelegate> _deviceDelegate;
    id <OSActivityStreamDelegate> _delegate;
    unsigned long long _options;
    unsigned long long _eventFilter;
    NSCompoundPredicate *_predicate;
    OSLogDevice *_device;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OSLogDevice *device; // @synthesize device=_device;
@property(copy, nonatomic) NSCompoundPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) unsigned long long eventFilter; // @synthesize eventFilter=_eventFilter;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <OSActivityStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <OSDeviceDelegate> deviceDelegate; // @synthesize deviceDelegate=_deviceDelegate;
- (BOOL)establishTrust:(id)arg1;
- (id)getInfoForDevice:(id)arg1 andKey:(id)arg2;
- (void)stopRemote;
- (void)stopLocal;
- (void)stop;
- (void)startLocal;
- (void)startRemote;
- (BOOL)streamEvent:(id)arg1 error:(id)arg2;
- (void)start;
- (void)addProcessID:(int)arg1;
- (id)initWithDevice:(void *)arg1;
@property(nonatomic) unsigned long long events;
- (void)dealloc;
- (id)init;

@end

