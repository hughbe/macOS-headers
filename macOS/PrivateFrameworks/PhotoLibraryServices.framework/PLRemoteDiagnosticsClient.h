//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCConnection;

@interface PLRemoteDiagnosticsClient : NSObject <NSXPCListenerDelegate>
{
    NSXPCConnection *_connection;
}

+ (id)_connectionForListenerEndpoint:(id)arg1;
+ (id)diagnosticsAgentWithErrorHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

