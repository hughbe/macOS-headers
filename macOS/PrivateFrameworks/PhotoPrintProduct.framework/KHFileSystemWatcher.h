//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray;
@protocol KHFileSystemWatcherDelegate;

@interface KHFileSystemWatcher : NSObject
{
    NSMutableArray *_fileSystemPathsToWatch;
    NSPointerArray *_fsEventSources;
    BOOL _bulkReload;
    id <KHFileSystemWatcherDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <KHFileSystemWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegateOfChangesInPath:(id)arg1;
- (void)_tearDownStream;
- (void)_resetFileSystemEventsStream;
- (void)stopWatchingAllPaths;
- (void)stopWatchingPath:(id)arg1;
- (void)startWatchingPath:(id)arg1;
- (void)dealloc;
- (id)initWithArrayOfURLs:(id)arg1;
- (id)init;

@end

