//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@protocol MPSectionedIdentifierListEnumerationItem, MPSectionedIdentifierListEnumerationTrackingEntry;

@protocol MPSectionedIdentifierListEnumerationResult <NSObject>
@property(readonly, nonatomic) long long entryType;
@property(readonly, nonatomic) long long branchDepth;
- (id <MPSectionedIdentifierListEnumerationTrackingEntry>)trackingEntryResult;
- (id <MPSectionedIdentifierListEnumerationItem>)itemResult;
@end

