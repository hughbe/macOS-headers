//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EFILogin/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol EFILHProtocol <NSObject>
- (void)buildLoginInterfaceResourcesForVolume:(NSString *)arg1 withLocalization:(NSArray *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)buildUserResourcesForVolume:(NSString *)arg1 forUserOfType:(NSNumber *)arg2 withName:(NSString *)arg3 pictureData:(NSData *)arg4 passwordHint:(NSString *)arg5 otherUserInfo:(NSDictionary *)arg6 completion:(void (^)(NSData *))arg7;
@end

