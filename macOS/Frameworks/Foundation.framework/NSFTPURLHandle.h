//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLHandle.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSFTPURLHandle : NSURLHandle
{
    NSURL *originalURL;
    struct __CFReadStream *ftpReadStream;
}

+ (id)cachedHandleForURL:(id)arg1;
+ (BOOL)canInitWithURL:(id)arg1;
+ (void)initialize;
- (id)errorStringForFTPStatusCode:(long long)arg1 fromURL:(id)arg2;
- (struct __CFReadStream *)createFTPReadStream;
- (void)performStreamRead;
- (void)reportStreamError;
- (void)endLoadInBackground;
- (void)beginLoadInBackground;
- (id)loadInForeground;
- (void)flushCachedData;
- (long long)expectedResourceDataSize;
- (BOOL)writeProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKeyIfAvailable:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (BOOL)writeData:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 cached:(BOOL)arg2;

@end

