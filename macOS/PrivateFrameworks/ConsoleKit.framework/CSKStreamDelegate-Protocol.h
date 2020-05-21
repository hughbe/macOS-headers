//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConsoleKit/NSObject-Protocol.h>

@class CSKEntity, CSKStream, CSKStreamObserver, CSKStreamSource;

@protocol CSKStreamDelegate <NSObject>
- (CSKEntity *)stream:(CSKStream *)arg1 anchorEntityForObserver:(CSKStreamObserver *)arg2 selected:(char *)arg3;
- (void)stream:(CSKStream *)arg1 sourceStreamingDidFinish:(CSKStreamSource *)arg2 total:(unsigned long long)arg3 failures:(unsigned long long)arg4;
- (void)stream:(CSKStream *)arg1 sourceDidFinishAnalyzing:(CSKStreamSource *)arg2;
- (void)stream:(CSKStream *)arg1 sourceDidStartAnalyzing:(CSKStreamSource *)arg2;
- (void)stream:(CSKStream *)arg1 sourceStreamingDidStart:(CSKStreamSource *)arg2;
- (void)stream:(CSKStream *)arg1 sourceStreamingDidFail:(CSKStreamSource *)arg2;
@end

