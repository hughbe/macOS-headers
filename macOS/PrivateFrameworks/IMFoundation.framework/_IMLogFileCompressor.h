//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMFoundation/IMFileCopierDelegate-Protocol.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate>
{
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)dealloc;
- (id)init;

@end

