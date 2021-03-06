//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMTranscoderAgent/NSObject-Protocol.h>

@class NSArray, NSData, NSURL;

@protocol IMBalloonPluginFallbackEncoder <NSObject>

@optional
- (void)fullQualityForData:(NSData *)arg1 attachments:(NSArray *)arg2 inFileURL:(NSURL *)arg3 completionBlock:(void (^)(NSArray *, NSError *, BOOL, unsigned long long))arg4;
- (void)fullQualityForData:(NSData *)arg1 inFileURL:(NSURL *)arg2 completionBlock:(void (^)(NSArray *, NSError *, BOOL, BOOL))arg3;
- (void)fallbackForData:(NSData *)arg1 attachments:(NSArray *)arg2 inFileURL:(NSURL *)arg3 completionBlockWithText:(void (^)(NSArray *, NSString *, NSError *, BOOL, BOOL))arg4;
- (void)fallbackForData:(NSData *)arg1 inFileURL:(NSURL *)arg2 completionBlock:(void (^)(NSArray *, NSError *, BOOL, BOOL))arg3;
@end

