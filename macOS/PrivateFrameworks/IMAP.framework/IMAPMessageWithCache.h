//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPMessage.h>

@class MCMessageHeaders, NSData;

@interface IMAPMessageWithCache : IMAPMessage
{
    NSData *_messageData;
    MCMessageHeaders *_headers;
}

- (void).cxx_destruct;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (void)setHeaders:(id)arg1;
- (id)headersFetchIfNotAvailable:(BOOL)arg1;
- (BOOL)isMessageContentLocallyAvailable;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;
@property(copy) NSData *messageData;

@end

