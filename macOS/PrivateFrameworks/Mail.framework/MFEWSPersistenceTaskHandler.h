//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCTaskHandler.h>

@class MFEWSAccount;

@interface MFEWSPersistenceTaskHandler : MCTaskHandler
{
    MFEWSAccount *_account;
}

- (void).cxx_destruct;
@property(readonly) __weak MFEWSAccount *account; // @synthesize account=_account;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

