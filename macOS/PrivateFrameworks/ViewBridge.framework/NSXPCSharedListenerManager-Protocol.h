//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol NSXPCSharedListenerManager
- (void)getProgramSDKVersion:(void (^)(unsigned int))arg1;
- (void)warmUpClassNamed:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
@end

