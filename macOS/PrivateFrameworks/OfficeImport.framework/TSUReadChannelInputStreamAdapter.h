//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUInputStream-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream>
{
    id <TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    long long _offset;
}

- (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (void)close;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

