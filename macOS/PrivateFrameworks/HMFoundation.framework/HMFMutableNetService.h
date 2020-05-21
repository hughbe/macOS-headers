//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFNetService.h>

@class NSDictionary;

@interface HMFMutableNetService : HMFNetService
{
    CDUnknownBlockType _publishBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType publishBlock; // @synthesize publishBlock=_publishBlock;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)stopPublishing;
- (void)startPublishingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setInternal:(id)arg1;
- (id)internal;
- (void)updateTXTRecord;
- (void)updateTXTRecordWithData:(id)arg1;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
@property(copy) NSDictionary *TXTRecord; // @dynamic TXTRecord;
@property unsigned long long port; // @dynamic port;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4;
- (id)initWithNetService:(id)arg1;

@end

