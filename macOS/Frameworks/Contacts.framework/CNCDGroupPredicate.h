//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNCDGroupPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDGroupPredicate : CNPredicate <CNCDGroupPredicate>
{
}

+ (id)predicateForGroupsWithNameMatching:(id)arg1;
- (id)cn_coreDataPredicate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

