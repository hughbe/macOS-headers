//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@interface CRKWaitForUnlockRequest : CATTaskRequest
{
    BOOL _shouldBecomeExclusive;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldBecomeExclusive; // @synthesize shouldBecomeExclusive=_shouldBecomeExclusive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

