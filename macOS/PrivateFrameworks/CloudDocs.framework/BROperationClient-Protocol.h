//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRCancellable-Protocol.h>

@class NSDictionary, NSObject, NSString;
@protocol BRCancellable;

@protocol BROperationClient <BRCancellable>
- (oneway void)progressCallbackWithTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)setRemoteOperationProxy:(NSObject<BRCancellable> *)arg1 userInfo:(NSDictionary *)arg2;
- (NSString *)description;
@end

