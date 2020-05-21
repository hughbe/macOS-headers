//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVRemoteCore/NSDiscardableContent-Protocol.h>

@class NSData, NSString;

@interface _RMSNowPlayingArtworkCacheItem : NSObject <NSDiscardableContent>
{
    BOOL _keepAlive;
    NSString *_artworkIdentifier;
    NSData *_artworkData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;

@end

