//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MPNowPlayingInfoLyricsItemToken : NSObject
{
    void *_mediaRemoteLyricsItemToken;
}

@property(readonly, nonatomic) void *mediaRemoteLyricsItemToken; // @synthesize mediaRemoteLyricsItemToken=_mediaRemoteLyricsItemToken;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;
- (id)initWithMediaRemoteLyricsItemToken:(void *)arg1;
- (id)initWithIdentifier:(id)arg1 userInfo:(id)arg2;

@end

