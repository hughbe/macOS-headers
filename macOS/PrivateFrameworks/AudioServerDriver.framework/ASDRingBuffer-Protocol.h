//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioServerDriver/NSObject-Protocol.h>

@class ASDStreamFormat;

@protocol ASDRingBuffer <NSObject>
@property(readonly, nonatomic, getter=isAllocated) BOOL allocated;
@property(readonly, nonatomic) CDUnknownBlockType readWithZerosBlock;
@property(readonly, nonatomic) CDUnknownBlockType readBlock;
@property(readonly, nonatomic) CDUnknownBlockType writeBlock;
@property(copy, nonatomic) ASDStreamFormat *readFormat;
@property(copy, nonatomic) ASDStreamFormat *writeFormat;
@property(nonatomic) long long frameCapacity;
- (void)clear;
- (void)deallocate;
- (void)allocate;
@end

