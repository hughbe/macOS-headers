//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCMessage.h>

@class MCMutableMessageHeaders, NSData, NSString;

@interface MCOutgoingMessage : MCMessage
{
    unsigned long long _localAttachmentsSize;
    NSString *_remoteID;
    MCMutableMessageHeaders *_mutableHeaders;
    NSString *_existingRemoteID;
    NSData *_rawData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSString *existingRemoteID; // @synthesize existingRemoteID=_existingRemoteID;
@property(retain, nonatomic) MCMutableMessageHeaders *mutableHeaders; // @synthesize mutableHeaders=_mutableHeaders;
@property(copy) NSString *remoteID; // @synthesize remoteID=_remoteID;
- (void)setLocalAttachmentsSize:(unsigned long long)arg1;
- (unsigned long long)messageSize;
- (id)headersFetchIfNotAvailable:(BOOL)arg1;
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)dataSource;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)init;

@end

