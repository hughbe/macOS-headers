//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRNowPlayingPlayerPathProtobuf;

__attribute__((visibility("hidden")))
@interface MRPlayerPathDictionaryKey : NSObject <NSCopying>
{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

+ (id)dictionaryKeyWithPlayerPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;

@end

