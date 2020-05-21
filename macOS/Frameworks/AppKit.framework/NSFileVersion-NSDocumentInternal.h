//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileVersion.h>

#import <AppKit/BUStarfieldTimelineItem-Protocol.h>

@class NSString;

@interface NSFileVersion (NSDocumentInternal) <BUStarfieldTimelineItem>
+ (void)_finishedWithBackupCollection:(void *)arg1;
+ (void)_getBackupVersionsForURL:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)_compareToVersion:(id)arg1;
- (unsigned long long)timelineItemType;
- (id)timelineItemDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

