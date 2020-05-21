//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSSiteMetadataRequest.h>

#import <Safari/FetchableItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BookmarkSummaryRequest : WBSSiteMetadataRequest <FetchableItem>
{
}

- (id)urlString;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

