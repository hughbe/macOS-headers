//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/NSObject-Protocol.h>

@class IMChatTranscriptLayoutEngine, IMTranscriptChatItem;
@protocol IMChatTranscriptDrawableFactory;

@protocol IMChatTranscriptLayoutEngineDataSource <NSObject>
- (IMTranscriptChatItem<IMChatTranscriptDrawableFactory> *)layoutEngine:(IMChatTranscriptLayoutEngine *)arg1 transcriptItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTranscriptItemsForLayoutEngine:(IMChatTranscriptLayoutEngine *)arg1;
@end

