//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessoryNowPlaying/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol AccessoryNowPlayingXPCServerProtocol <NSObject>
- (void)playbackQueueListInfoResponse:(NSString *)arg1 requestID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)playbackQueueListChanged;
- (void)playbackAttributesHaveChanged:(NSDictionary *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)mediaItemArtworkHasChanged:(NSData *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)mediaItemAttributesHaveChanged:(NSDictionary *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)initConnection:(void (^)(BOOL))arg1;
@end

