//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface WBSPasswordAuditingEligibleDomainsManager : NSObject
{
    NSSet *_domainsIneligibleForPasswordAuditing;
}

- (void).cxx_destruct;
@property(copy) NSSet *domainsIneligibleForPasswordAuditing; // @synthesize domainsIneligibleForPasswordAuditing=_domainsIneligibleForPasswordAuditing;
- (id)initWithDomainsIneligibleForPasswordAuditing:(id)arg1;
- (id)init;

@end

