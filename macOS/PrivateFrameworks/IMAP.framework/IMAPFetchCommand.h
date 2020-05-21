//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSIndexSet, NSMutableArray;
@protocol IMAPFetchResponseHandler;

@interface IMAPFetchCommand : IMAPSingleCommand
{
    NSIndexSet *_messageNumbers;
    NSMutableArray *_dataItems;
    id <IMAPFetchResponseHandler> _responseHandler;
}

+ (id)_fetchDataItemsForMessageSkeletons;
+ (id)_headersToFetch;
- (void).cxx_destruct;
@property(retain) id <IMAPFetchResponseHandler> responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(copy) NSIndexSet *messageNumbers; // @synthesize messageNumbers=_messageNumbers;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)_newMessageSetCommandString;
- (struct _NSRange)_nsRangeForIMAPRange:(CDStruct_f792af56)arg1;
- (BOOL)_isLegalRange:(CDStruct_f792af56)arg1;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (void)addMessageUidsAndFlagsDataItems;
- (void)addMessageSkeletonDataItems;
- (void)addDataItem:(id)arg1;
- (id)activityString;
- (id)commandTypeString;
@property CDStruct_f792af56 range;
- (void)_imapClientFetchCommandCommonInitWithMessageNumbers:(id)arg1;
- (id)description;
- (id)initWithRange:(CDStruct_f792af56)arg1;
- (id)init;
- (id)initWithMessageNumbers:(id)arg1;

@end

