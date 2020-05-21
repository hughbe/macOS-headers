//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@protocol SFDigestOperation <NSObject, NSCopying, NSSecureCoding>
+ (long long)blockSize;
+ (long long)outputSize;
+ (NSData *)digest:(NSData *)arg1;
@property(readonly, copy) NSData *hashValue;
- (void)addData:(NSData *)arg1;
@end

