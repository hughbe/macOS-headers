//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFBookmark.h>

#import <SafariServices/_SFBookmarkLeaf-Protocol.h>

@class NSString, NSURL;

@interface _SFBookmarkLeaf : _SFBookmark <_SFBookmarkLeaf>
{
    NSURL *_url;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

