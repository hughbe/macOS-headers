//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFMCMessageBody.h>

@class ICNFMCOutgoingMessage, NSMutableData;

@interface _ICNFMCOutgoingMessageBody : ICNFMCMessageBody
{
    NSMutableData *_rawData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *rawData; // @synthesize rawData=_rawData;
@property __weak ICNFMCOutgoingMessage *message;
- (id)init;

@end

