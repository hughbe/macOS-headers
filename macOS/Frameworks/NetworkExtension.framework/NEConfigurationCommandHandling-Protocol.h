//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol NEConfigurationCommandHandling <NSObject>
- (void)handleCommand:(int)arg1 forConfigWithName:(NSString *)arg2 withParameters:(NSDictionary *)arg3 completionHandler:(void (^)(NSArray *))arg4;
@end

