//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBuffer-Protocol.h>

@class CIRenderDestination;

@protocol NUMutableBuffer <NUBuffer>
@property(readonly, nonatomic) void *mutableBytes;
- (CIRenderDestination *)newRenderDestination;
- (void *)mutableBytesAtPoint:(CDStruct_912cb5d2)arg1;
@end

