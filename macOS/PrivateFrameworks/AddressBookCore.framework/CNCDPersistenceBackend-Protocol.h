//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class ABCDContainer, ABCDContainerDiff, CNCDPersistenceContext, NSArray, NSString;

@protocol CNCDPersistenceBackend <NSObject>
- (void)applyDiff:(ABCDContainerDiff *)arg1 toContainerWithIdentifier:(NSString *)arg2;
- (ABCDContainer *)defaultContainer;
- (NSArray *)allContainers;
- (CNCDPersistenceContext *)makePersistenceContextWithNotificationSource:(id)arg1;
@end

