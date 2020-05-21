//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface _MFRedundantTextIdentifierSolutionContext : NSObject
{
    NSMutableArray *_redundantRanges;
    NSMutableIndexSet *_redundantAttachmentStartIndexes;
    NSMutableArray *_attributionLineRanges;
    BOOL _searchInForwardDirection;
    BOOL _matchedEntireOriginalContiguously;
    CDStruct_f9502b4c *_replyBuffer;
    long long _replyStartIndex;
    long long _replyLength;
    CDStruct_f9502b4c *_originalBuffer;
    long long _originalStartIndex;
    long long _originalLength;
    NSDictionary *_originalAttachmentContextsByURL;
    NSDictionary *_replyAttachmentContextsByURL;
    unsigned long long _startingIndexForRedundantRanges;
    unsigned long long _startingIndexForAttributionLineRanges;
    long long _lastIndexMatchedInOriginal;
    long long _lastIndexMatchedInReply;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL matchedEntireOriginalContiguously; // @synthesize matchedEntireOriginalContiguously=_matchedEntireOriginalContiguously;
@property(nonatomic) BOOL searchInForwardDirection; // @synthesize searchInForwardDirection=_searchInForwardDirection;
@property(nonatomic) long long lastIndexMatchedInReply; // @synthesize lastIndexMatchedInReply=_lastIndexMatchedInReply;
@property(nonatomic) long long lastIndexMatchedInOriginal; // @synthesize lastIndexMatchedInOriginal=_lastIndexMatchedInOriginal;
@property(nonatomic) unsigned long long startingIndexForAttributionLineRanges; // @synthesize startingIndexForAttributionLineRanges=_startingIndexForAttributionLineRanges;
@property(nonatomic) unsigned long long startingIndexForRedundantRanges; // @synthesize startingIndexForRedundantRanges=_startingIndexForRedundantRanges;
@property(readonly, copy, nonatomic) NSDictionary *replyAttachmentContextsByURL; // @synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL;
@property(readonly, copy, nonatomic) NSDictionary *originalAttachmentContextsByURL; // @synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL;
@property(readonly, nonatomic) long long originalLength; // @synthesize originalLength=_originalLength;
@property(nonatomic) long long originalStartIndex; // @synthesize originalStartIndex=_originalStartIndex;
@property(readonly, nonatomic) CDStruct_f9502b4c *originalBuffer; // @synthesize originalBuffer=_originalBuffer;
@property(readonly, nonatomic) long long replyLength; // @synthesize replyLength=_replyLength;
@property(nonatomic) long long replyStartIndex; // @synthesize replyStartIndex=_replyStartIndex;
@property(readonly, nonatomic) CDStruct_f9502b4c *replyBuffer; // @synthesize replyBuffer=_replyBuffer;
- (BOOL)location:(long long)arg1 isInRangeArray:(id)arg2 startingIndex:(unsigned long long *)arg3;
- (long long)contentTypeForIndex:(long long)arg1;
- (void)addRangeWithStart:(long long)arg1 end:(long long)arg2 toArray:(id)arg3;
- (void)computeAttributionRangesInReply;
- (void)computeRedundantRangesInReply;
- (void)addAttributionLineRanges:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attributionLineRanges;
- (void)addRedundantAttachmentStartIndexes:(id)arg1;
@property(readonly, copy, nonatomic) NSIndexSet *redundantAttachmentStartIndexes;
- (void)addRedundantRanges:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *redundantRanges;
- (id)description;
- (id)init;
- (id)initWithReply:(CDStruct_f9502b4c *)arg1 replyStartIndex:(long long)arg2 replyLength:(long long)arg3 replyAttachmentContextsByURL:(id)arg4 original:(CDStruct_f9502b4c *)arg5 originalStartIndex:(long long)arg6 originalLength:(long long)arg7 originalAttachmentContextsByURL:(id)arg8 searchInForwardDirection:(BOOL)arg9;

@end

