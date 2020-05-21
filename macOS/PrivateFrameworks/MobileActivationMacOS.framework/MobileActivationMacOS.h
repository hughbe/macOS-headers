//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MobileActivationMacOS : NSObject
{
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (BOOL)deactivateDevice:(id *)arg1;
- (BOOL)handleActivationInfo:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)createActivationInfo:(id)arg1 error:(id *)arg2;
- (id)getUCRTActivationLockState:(id *)arg1;
- (id)getActivationState:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

