//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SocialUI/NSObject-Protocol.h>

@class SOAttachmentsTabViewController;

@protocol SOAttachmentsTabViewControllerDelegate <NSObject>
- (BOOL)hasUncachedImageAttachmentsForTabViewController:(SOAttachmentsTabViewController *)arg1;
- (void)attachmentsTabViewController:(SOAttachmentsTabViewController *)arg1 viewDidChangeAfterUpdatingAttachments:(BOOL)arg2;
@end

