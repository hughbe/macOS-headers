//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardServices/CRSResponse.h>

@class CRSCardRequest;
@protocol CRCard;

@interface CRSCardResponse : CRSResponse
{
    CRSCardRequest *_request;
    id <CRCard> _card;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CRCard> card; // @synthesize card=_card;
@property(retain, nonatomic) CRSCardRequest *request; // @synthesize request=_request;

@end

