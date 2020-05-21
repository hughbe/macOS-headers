//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface WBSDownloadFileUnarchiver : NSObject
{
    NSString *_sourcePath;
    NSString *_destinationPath;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (id)pickDestinationPath:(id)arg1;
- (id)createTemporaryDirectory;
- (void)didFinishUnarchiving;
- (void)interruptUnarchiving;
@property(readonly, nonatomic) BOOL canInterruptUnarchiving;
- (void)unarchive;
- (void)unarchiveWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSourcePath:(id)arg1;

@end

