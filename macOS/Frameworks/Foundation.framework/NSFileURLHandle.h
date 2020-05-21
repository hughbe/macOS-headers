//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLHandle.h>

@class NSDictionary, NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface NSFileURLHandle : NSURLHandle
{
    NSString *_path;
    NSFileHandle *_fh;
    NSDictionary *_properties;
}

+ (id)cachedHandleForURL:(id)arg1;
+ (BOOL)canInitWithURL:(id)arg1;
+ (void)initialize;
- (void)_backgroundFileLoadCompleted:(id)arg1;
- (void)flushCachedData;
- (void)endLoadInBackground;
- (void)beginLoadInBackground;
- (BOOL)writeProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKeyIfAvailable:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (BOOL)writeData:(id)arg1;
- (id)loadInForeground;
- (void)dealloc;
- (id)initWithURL:(id)arg1 cached:(BOOL)arg2;

@end

