//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ABLinkingInfoDataSource;

@interface ABUpdatesLinkingInformation : NSObject
{
    id <ABLinkingInfoDataSource> _adapter;
}

- (void)unlinkLoneRemainingPeople;
- (void)updatePreferredPhotoFlags;
- (void)updatePreferredNameFlags;
- (void)linkInsertedPeople;
- (void)updateLinkingInformation;
- (void)dealloc;
- (id)initWithAdapter:(id)arg1;

@end

