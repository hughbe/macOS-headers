//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray, NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface AVMovieInternal : NSObject
{
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}

- (void).cxx_destruct;

@end

