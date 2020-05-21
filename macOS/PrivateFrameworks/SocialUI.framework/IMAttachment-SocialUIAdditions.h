//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMAttachment.h>

#import <SocialUI/QLPreviewItem-Protocol.h>

@class NSString, NSURL;

@interface IMAttachment (SocialUIAdditions) <QLPreviewItem>
@property(readonly) NSURL *previewItemURL;
@property(readonly) NSString *previewItemTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;
@end

