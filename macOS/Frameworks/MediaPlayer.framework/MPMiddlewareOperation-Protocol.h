//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol MPMiddlewareOperation <NSObject>
@property(readonly, nonatomic) NSArray *invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(readonly, nonatomic) NSError *error;

@optional
- (NSString *)timeoutDescription;
@end

