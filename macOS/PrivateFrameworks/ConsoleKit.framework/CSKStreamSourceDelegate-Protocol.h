//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConsoleKit/NSObject-Protocol.h>

@class CSKEntity, CSKStreamSource, NSArray;

@protocol CSKStreamSourceDelegate <NSObject>
- (CSKEntity *)keyEntityToFetchBackwardEntities;
- (CSKEntity *)keyEntityToFetchForwardEntities;
- (void)streamSource:(CSKStreamSource *)arg1 didStreamBackwardEntities:(NSArray *)arg2;
- (void)streamSource:(CSKStreamSource *)arg1 didStreamForwardEntities:(NSArray *)arg2;
- (void)streamSourceDidFinish:(CSKStreamSource *)arg1 total:(unsigned long long)arg2 failures:(unsigned long long)arg3;
- (void)streamSourceDidFail:(CSKStreamSource *)arg1;
- (void)streamSourceDidStop:(CSKStreamSource *)arg1;
- (void)streamSourceDidResume:(CSKStreamSource *)arg1;

@optional
- (void)streamSourceDidFinishAnalyzing:(CSKStreamSource *)arg1;
- (void)streamSourceDidStartAnalyzing:(CSKStreamSource *)arg1;
@end

