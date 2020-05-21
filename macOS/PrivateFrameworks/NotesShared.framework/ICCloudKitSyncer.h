//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ICCloudKitSyncerDelegate;

@interface ICCloudKitSyncer : NSObject
{
    id <ICCloudKitSyncerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ICCloudKitSyncerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)saveUnsyncedObjects;
- (void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

