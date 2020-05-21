//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDContainerPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDContainersInAccountWithIdentifierPredicate : CNPredicate <CNCDContainerPredicate>
{
    BOOL _includeDisabledContainers;
    NSString *_accountIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL includeDisabledContainers; // @synthesize includeDisabledContainers=_includeDisabledContainers;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)cn_coreDataPredicate;
- (id)initWithAccountIdentifider:(id)arg1 includeDisabledContainers:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

