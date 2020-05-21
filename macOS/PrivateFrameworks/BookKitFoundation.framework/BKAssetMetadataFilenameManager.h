//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BKAssetMetadataFilenameManager : NSObject
{
    NSObject<OS_dispatch_queue> *_reservedFilenamesAccessQueue;
    NSMutableDictionary *_reservedFilenames;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *reservedFilenames; // @synthesize reservedFilenames=_reservedFilenames;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reservedFilenamesAccessQueue; // @synthesize reservedFilenamesAccessQueue=_reservedFilenamesAccessQueue;
- (void)unreserveFilename:(id)arg1 inDirectory:(id)arg2;
- (id)reserveNonCollidingFilename:(id)arg1 inDirectory:(id)arg2;
- (id)init;

@end

