//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DAVUnlock : ISS_DAVRequest
{
}

+ (id)unlockRequestWithSession:(id)arg1 path:(id)arg2 lockToken:(id)arg3;
+ (id)unlockRequestWithURL:(id)arg1 lockToken:(id)arg2;
- (void)finalizeOperation;
- (id)initUnlockWithSession:(id)arg1 path:(id)arg2 lockToken:(id)arg3;
- (id)initUnlockWithURL:(id)arg1 lockToken:(id)arg2;
- (void)_initUnlockForToken:(id)arg1;

@end

