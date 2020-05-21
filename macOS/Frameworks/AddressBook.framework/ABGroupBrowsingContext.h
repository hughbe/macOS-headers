//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABGroup, NSString;

@interface ABGroupBrowsingContext : NSObject
{
    ABAccount *_account;
    ABGroup *_group;
    NSString *_groupLabel;
    BOOL _canCreateGroups;
}

@property(readonly) BOOL canCreateGroups; // @synthesize canCreateGroups=_canCreateGroups;
@property(readonly, copy) NSString *groupLabel; // @synthesize groupLabel=_groupLabel;
@property(readonly, retain) ABGroup *group; // @synthesize group=_group;
@property(readonly, retain) ABAccount *account; // @synthesize account=_account;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 group:(id)arg2 groupLabel:(id)arg3 canCreateGroups:(BOOL)arg4;

@end

