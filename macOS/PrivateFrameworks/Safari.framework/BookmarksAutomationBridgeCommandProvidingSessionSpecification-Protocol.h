//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BookmarksAutomationSessionSpecification.h"

@class BookmarksAutomationCreateBookmarkCommand, BookmarksAutomationCreateReadingListItemCommand, BookmarksAutomationDeleteBookmarkCommand, BookmarksAutomationDeleteReadingListItemCommand, BookmarksAutomationDumpStateCommand, BookmarksAutomationEditBookmarkCommand, BookmarksAutomationEditReadingListItemCommand;

@protocol BookmarksAutomationBridgeCommandProvidingSessionSpecification <BookmarksAutomationSessionSpecification>
@property(readonly, nonatomic) BookmarksAutomationEditReadingListItemCommand *editReadingListItemCommand;
@property(readonly, nonatomic) BookmarksAutomationEditBookmarkCommand *editBookmarkCommand;
@property(readonly, nonatomic) BookmarksAutomationDumpStateCommand *dumpStateCommand;
@property(readonly, nonatomic) BookmarksAutomationDeleteReadingListItemCommand *deleteReadingListItemCommand;
@property(readonly, nonatomic) BookmarksAutomationDeleteBookmarkCommand *deleteBookmarkCommand;
@property(readonly, nonatomic) BookmarksAutomationCreateReadingListItemCommand *createReadingListItemCommand;
@property(readonly, nonatomic) BookmarksAutomationCreateBookmarkCommand *createBookmarkCommand;
@end

