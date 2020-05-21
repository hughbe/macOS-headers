//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/NSObject-Protocol.h>

@class NSString;

@protocol SFBehaviorProtocol <NSObject>
- (void)configString:(NSString *)arg1 family:(NSString *)arg2 complete:(void (^)(NSString *))arg3;
- (void)configNumber:(NSString *)arg1 family:(NSString *)arg2 complete:(void (^)(NSNumber *))arg3;
- (void)feature:(NSString *)arg1 family:(NSString *)arg2 defaultValue:(_Bool)arg3 complete:(void (^)(_Bool))arg4;
- (void)ramping:(NSString *)arg1 family:(NSString *)arg2 complete:(void (^)(unsigned int))arg3;
@end

