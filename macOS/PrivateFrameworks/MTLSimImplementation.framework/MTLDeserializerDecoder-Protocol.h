//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimImplementation/NSObject-Protocol.h>

@class MTLByteIterator;

@protocol MTLDeserializerDecoder <NSObject>
@property(readonly) unsigned char type;
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(MTLByteIterator *)arg2;
@end

