//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUInputStream-Protocol.h>

@class NSString, OISFUCryptor;
@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUCryptoInputStream : NSObject <SFUInputStream>
{
    id <SFUInputStream> mBaseStream;
    OISFUCryptor *mCryptor;
    long long mOffset;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

