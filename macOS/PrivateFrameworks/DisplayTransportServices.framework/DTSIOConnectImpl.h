//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DisplayTransportServices/DTSIOConnect-Protocol.h>

@class NSString;

@interface DTSIOConnectImpl : NSObject <DTSIOConnect>
{
    unsigned int _connect;
}

@property(readonly, nonatomic) unsigned int connect; // @synthesize connect=_connect;
- (int)callStructMethod:(unsigned int)arg1 inputStruct:(const void *)arg2 inputStructCount:(unsigned long long)arg3 outputStruct:(void *)arg4 outputStructCount:(unsigned long long *)arg5;
- (int)callMethod:(unsigned int)arg1 input:(const unsigned long long *)arg2 inputCount:(unsigned int)arg3 inputStruct:(const void *)arg4 inputStructCount:(unsigned long long)arg5 output:(unsigned long long *)arg6 outputCount:(unsigned int *)arg7 outputStruct:(void *)arg8 outputStructCount:(unsigned long long *)arg9;
- (void)dealloc;
- (id)initWithConnect:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

