//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFSignpostable-Protocol.h>

@class NSString;

@interface EMDaemonInterfaceRequest : NSObject <EFSignpostable>
{
}

+ (unsigned long long)uniqueRequestID;
+ (id)systemScopeSignpostLog;
+ (id)signpostLog;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

