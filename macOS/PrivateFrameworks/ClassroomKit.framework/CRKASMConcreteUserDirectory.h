//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMUserDirectory-Protocol.h>

@class NSString;
@protocol CRKClassKitRosterRequirements;

@interface CRKASMConcreteUserDirectory : NSObject <CRKASMUserDirectory>
{
    id <CRKClassKitRosterRequirements> _requirements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKClassKitRosterRequirements> requirements; // @synthesize requirements=_requirements;
- (id)iteratorForSearchString:(id)arg1 sortingGivenNameFirst:(BOOL)arg2 pageSize:(long long)arg3;
- (id)initWithRequirements:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

