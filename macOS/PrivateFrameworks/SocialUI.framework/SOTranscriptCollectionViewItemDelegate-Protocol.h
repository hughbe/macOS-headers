//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/NSObject-Protocol.h>

@class SOTranscriptCollectionViewItem;

@protocol SOTranscriptCollectionViewItemDelegate <NSObject>
- (void)transcriptCollectionViewItemReplayExpressiveMessage:(SOTranscriptCollectionViewItem *)arg1;
- (void)transcriptCollectionViewItemPlayExpressiveMessageIfNeeded:(SOTranscriptCollectionViewItem *)arg1;
- (void)transcriptCollectionViewItemBeginLoadingMoreHistory:(SOTranscriptCollectionViewItem *)arg1;
@end

