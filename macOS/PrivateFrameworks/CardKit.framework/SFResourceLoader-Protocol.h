//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class SFCard, SFImage, SFMoreResults;

@protocol SFResourceLoader <NSObject>

@optional
- (BOOL)loadMoreResults:(SFMoreResults *)arg1 withCompletionHandler:(void (^)(NSArray *, NSError *))arg2;
- (BOOL)loadCard:(SFCard *)arg1 withCompletionHandler:(void (^)(SFCard *, NSError *))arg2;
- (BOOL)loadImage:(SFImage *)arg1 withCompletionHandler:(void (^)(SFImage *, NSError *))arg2;
@end

