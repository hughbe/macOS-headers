//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_groupIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

