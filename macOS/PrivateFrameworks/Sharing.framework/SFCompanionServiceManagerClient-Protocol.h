//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSFileHandle, SFCompanionService;

@protocol SFCompanionServiceManagerClient <NSObject>
- (void)streamToService:(SFCompanionService *)arg1 withFileHandle:(NSFileHandle *)arg2 acceptReply:(void (^)(BOOL))arg3;
@end

