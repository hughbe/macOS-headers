//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderUI/NSObject-Protocol.h>

@class FPUIActionRemoteContext, NSDictionary, NSError;

@protocol FPUIActionRemoteContextDelegate <NSObject>
- (void)remoteActionContext:(FPUIActionRemoteContext *)arg1 didEncounterError:(NSError *)arg2 completionHandler:(void (^)(void))arg3;
- (void)remoteActionContextDidFinishAction:(FPUIActionRemoteContext *)arg1 userInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

