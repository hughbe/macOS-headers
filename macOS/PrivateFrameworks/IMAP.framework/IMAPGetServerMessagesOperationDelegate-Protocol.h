//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/NSObject-Protocol.h>

@class IMAPGetServerMessagesOperation, NSArray, NSIndexSet;

@protocol IMAPGetServerMessagesOperationDelegate <NSObject>
- (void)getServerMessagesOperation:(IMAPGetServerMessagesOperation *)arg1 gotServerMessages:(NSArray *)arg2 uidsNotFound:(NSIndexSet *)arg3;
@end

