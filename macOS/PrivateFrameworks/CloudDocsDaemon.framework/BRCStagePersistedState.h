//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCPersistedState.h>

__attribute__((visibility("hidden")))
@interface BRCStagePersistedState : BRCPersistedState
{
    long long _latestGCStartTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)timeSinceLatestGCStartTime;
- (id)initWithLatestGCStartTime:(long long)arg1;
- (id)init;

@end

