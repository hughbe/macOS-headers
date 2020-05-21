//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/SecEscrowRequestable-Protocol.h>

@class NSString, NSXPCConnection;

@interface SecEscrowRequest : NSObject <SecEscrowRequestable>
{
    NSXPCConnection *_connection;
}

+ (id)request:(id *)arg1;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)pendingEscrowUpload:(id *)arg1;
- (unsigned long long)storePrerecordsInEscrow:(id *)arg1;
- (BOOL)resetAllRequests:(id *)arg1;
- (id)fetchStatuses:(id *)arg1;
- (id)fetchRequestWaitingOnPasscode:(id *)arg1;
- (id)fetchPrerecord:(id)arg1 error:(id *)arg2;
- (BOOL)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 error:(id *)arg3;
- (BOOL)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

