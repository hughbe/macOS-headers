//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKTokenSession.h>

@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession
{
    TKSmartCard *_smartCard;
    BOOL _hasSession;
    TKSmartCard *_errorCard;
}

- (void).cxx_destruct;
- (id)name;
- (void)endRequest;
@property(readonly) TKSmartCard *smartCard;
- (void)beginRequest;
- (id)initWithToken:(id)arg1;

@end

