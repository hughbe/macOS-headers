//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageSecurity/MSMessage-Protocol.h>

@class MSOID, NSData;
@protocol MSCMSMessage;

@protocol MSCMSMessage <MSMessage>
@property(retain) MSOID *contentType;
@property(retain) id <MSCMSMessage> embeddedContent;
@property(retain, nonatomic) NSData *dataContent;
@property(readonly) MSOID *type;
@end

