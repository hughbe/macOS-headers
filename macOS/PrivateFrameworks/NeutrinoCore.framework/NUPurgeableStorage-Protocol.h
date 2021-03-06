//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageStorage-Protocol.h>

@protocol NUPurgeableStorage <NUImageStorage>
- (BOOL)makeNonPurgeable;
- (void)makePurgeable;
- (void)adjustPurgeLevel:(long long)arg1;
- (long long)purgeLevel;
- (BOOL)isPurged;
- (BOOL)isPurgeable;
@end

