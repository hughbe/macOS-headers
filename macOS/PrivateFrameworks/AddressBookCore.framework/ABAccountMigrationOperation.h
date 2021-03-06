//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ABAccountRepository, NSString;

@interface ABAccountMigrationOperation : NSOperation
{
    ABAccountRepository *_accountRepository;
    NSString *_originAccountIdentifier;
    NSString *_destinationAccountIdentifier;
    BOOL _mergeData;
    BOOL _deleteOriginalData;
    CDUnknownBlockType _errorHandler;
}

+ (id)os_log;
- (void).cxx_destruct;
@property BOOL deleteOriginalData; // @synthesize deleteOriginalData=_deleteOriginalData;
@property BOOL mergeData; // @synthesize mergeData=_mergeData;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (id)makePersistentStoreCoordinatorCacheWithAccounts:(id)arg1;
- (id)makeAddressBookWithAccounts:(id)arg1;
- (void)main;
- (id)initWithAccountRepository:(id)arg1 originAccountIdentifier:(id)arg2 destinationAccountIdentifier:(id)arg3;

@end

