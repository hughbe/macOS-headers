//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ISSupport/ISS_DAVUnlock.h>

@interface ISS_DMDAVUnlock : ISS_DAVUnlock
{
}

+ (id)unlockRequestWithSession:(id)arg1 URI:(id)arg2 lockToken:(id)arg3;
- (void)finalizeOperation;
- (id)initUnlockWithSession:(id)arg1 URI:(id)arg2 lockToken:(id)arg3;

@end

