//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject
{
    NSDictionary *_applicationsByIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *applicationsByIdentifier; // @synthesize applicationsByIdentifier=_applicationsByIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicationsByIdentifier:(id)arg1;

@end

