//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

@class NSImage;

@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse
{
    NSImage *_thumbnail;
}

+ (id)responseWithURL:(id)arg1 thumbnail:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (id)initWithURL:(id)arg1 thumbnail:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

