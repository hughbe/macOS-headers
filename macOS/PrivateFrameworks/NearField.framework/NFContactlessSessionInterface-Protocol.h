//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearField/NFSessionInterface-Protocol.h>

@class NFApplet;

@protocol NFContactlessSessionInterface <NFSessionInterface>
- (oneway void)stopCardEmulation:(void (^)(NSError *))arg1;
- (oneway void)startCardEmulation:(void (^)(NSError *))arg1;
- (oneway void)setActiveApplet:(NFApplet *)arg1 callback:(void (^)(NFApplet *, NSError *))arg2;
- (oneway void)getApplets:(void (^)(NSArray *, NFApplet *, NSError *))arg1;
@end

