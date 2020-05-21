//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface MLMovieArtist : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyMovieArtistDictionary;
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;
@property(copy, nonatomic) NSString *artistName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMovieArtistDictionary:(id)arg1;
- (id)init;

@end

