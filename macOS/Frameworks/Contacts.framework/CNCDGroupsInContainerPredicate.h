//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDContainerScopedGroupPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDGroupsInContainerPredicate : CNPredicate <CNCDContainerScopedGroupPredicate>
{
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)cn_coreDataExchangePredicate;
- (id)cn_coreDataPredicate;
- (id)containerIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

