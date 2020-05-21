//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFEWSCreateItemRequestOperation.h>

@class MFEWSCreateEventReplyResponseOperation, MFEWSGetItemsResponseOperation, NSString;

@interface MFEWSCreateEventReplyRequestOperation : MFEWSCreateItemRequestOperation
{
    BOOL _messageResponseType;
    NSString *_messageMeetingItemIdString;
    MFEWSGetItemsResponseOperation *_getItemsResponse;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL messageResponseType; // @synthesize messageResponseType=_messageResponseType;
@property(readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;
@property(readonly, copy, nonatomic) NSString *messageMeetingItemIdString; // @synthesize messageMeetingItemIdString=_messageMeetingItemIdString;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
@property(retain, nonatomic) MFEWSCreateEventReplyResponseOperation *responseOperation;
- (id)prepareRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (void)_ewsCreateEventReplyRequestOperationCommonInitWithItemIdString:(id)arg1 responseType:(BOOL)arg2;
- (id)initWithItemIdString:(id)arg1 folderIdString:(id)arg2 messageType:(BOOL)arg3 responseType:(BOOL)arg4 disposition:(long long)arg5 gateway:(id)arg6 errorHandler:(id)arg7;

@end

