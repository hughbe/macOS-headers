//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNCDContactPredicate-Protocol.h>

@class NSArray, NSPredicate;

@protocol CNCDContainerScopedContactPredicate <CNCDContactPredicate>
- (NSPredicate *)cn_coreDataExchangePredicate;
- (NSArray *)containerIdentifiers;
@end

