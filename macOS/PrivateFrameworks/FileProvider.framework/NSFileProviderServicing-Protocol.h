//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class NSProgress, NSString;

@protocol NSFileProviderServicing <NSObject>
- (NSProgress *)supportedServiceSourcesForItemIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end

