//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABAccount, ABAddressBook, ABGroup, ABPersonEntry, NSArray, NSDictionary, NSString;
@protocol ABPersonListHeadlining;

@protocol ABPersonListControllerProtocol <NSObject>
@property(readonly) BOOL shouldIncludeGroups;
@property(readonly) NSArray *personEntries;
@property(readonly) NSArray *entries;
@property(retain) ABGroup *displayedGroup;
@property(retain, nonatomic) ABAddressBook *addressBook;
@property(retain) ABAccount *account;
- (void)scrollVisibleToSelectedRow;
- (void)reflectChangesInUIForNotificationUserInfo:(NSDictionary *)arg1;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)expandPersonEntriesCacheWithEntry:(ABPersonEntry *)arg1;
- (void)clearExtraUniqueIdsInSearchResults;
- (void)updateSuggestedContacts;
- (void)fetchContacts;
- (void)rearrangeObjects;
- (void)setSelectedEntries:(NSArray *)arg1;
- (void)setHeadliner:(id <ABPersonListHeadlining>)arg1;
- (void)setShouldUnifyPeople:(BOOL)arg1;
- (void)setFilterTerms:(NSString *)arg1;
@end

