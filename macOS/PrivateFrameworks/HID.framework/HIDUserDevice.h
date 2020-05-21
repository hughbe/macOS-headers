//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HIDUserDevice : NSObject
{
    struct __IOHIDUserDevice *_device;
    CDUnknownBlockType _getReportHandler;
    CDUnknownBlockType _setReportHandler;
    unsigned int _service;
}

- (void).cxx_destruct;
@property(readonly) unsigned int service;
- (BOOL)handleReport:(id)arg1 withTimestamp:(unsigned long long)arg2 error:(out id *)arg3;
- (BOOL)handleReport:(id)arg1 error:(out id *)arg2;
- (void)setSetReportHandler:(CDUnknownBlockType)arg1;
- (void)setGetReportHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)activate;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(CDUnknownBlockType)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end

