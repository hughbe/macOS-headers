//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamBulkSendSessionCandidate-Protocol.h>

@class HMDDataStreamBulkSendProtocol, NSDictionary, NSError, NSMutableArray;

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate>
{
    HMDDataStreamBulkSendProtocol *_bulkSendProtocol;
    NSDictionary *_requestHeader;
    NSMutableArray *_pendingReads;
    NSError *_receivedFailure;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *receivedFailure; // @synthesize receivedFailure=_receivedFailure;
@property(retain, nonatomic) NSMutableArray *pendingReads; // @synthesize pendingReads=_pendingReads;
@property(readonly, nonatomic) NSDictionary *requestHeader; // @synthesize requestHeader=_requestHeader;
@property(readonly, nonatomic) __weak HMDDataStreamBulkSendProtocol *bulkSendProtocol; // @synthesize bulkSendProtocol=_bulkSendProtocol;
- (void)rejectBulkSendSessionWithStatus:(unsigned short)arg1;
- (void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithProtocol:(id)arg1 requestHeader:(id)arg2;

@end

