//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuetContext/_CDContextServer-Protocol.h>

@class NSArray, NSObject, _CDContextualKeyPath;
@protocol NSCopying><NSSecureCoding;

@protocol _CDLocalContextServer <_CDContextServer>
- (void)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 forArrayAtPath:(_CDContextualKeyPath *)arg3 handler:(void (^)(BOOL))arg4;
- (void)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forPath:(_CDContextualKeyPath *)arg2 handler:(void (^)(BOOL))arg3;
@end

