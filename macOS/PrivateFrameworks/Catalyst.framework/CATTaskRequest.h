//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/NSSecureCoding-Protocol.h>

@interface CATTaskRequest : NSObject <NSSecureCoding>
{
    BOOL _handlesNotifications;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) BOOL handlesNotifications; // @synthesize handlesNotifications=_handlesNotifications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

