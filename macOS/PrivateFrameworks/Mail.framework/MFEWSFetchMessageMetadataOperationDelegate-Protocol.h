//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class MFEWSFetchMessageMetadataOperation, MFEWSMailboxItemsBatch;

@protocol MFEWSFetchMessageMetadataOperationDelegate <NSObject>
+ (id)new;
- (void)fetchMessageMetadataOperation:(MFEWSFetchMessageMetadataOperation *)arg1 didPopulateBatch:(MFEWSMailboxItemsBatch *)arg2;
- (id)init;
@end

