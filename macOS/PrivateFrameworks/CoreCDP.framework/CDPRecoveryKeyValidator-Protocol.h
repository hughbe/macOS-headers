//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDP/NSObject-Protocol.h>

@class NSString;

@protocol CDPRecoveryKeyValidator <NSObject>
- (BOOL)confirmRecoveryKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)generateRecoveryKeyWithError:(id *)arg1;
- (void)generateRecoveryKey:(void (^)(NSString *, NSError *))arg1;
- (void)confirmRecoveryKey:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

