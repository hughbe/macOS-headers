//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NEVPNAppRuleExecutable : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_matchSigningIdentifier;
    NSString *_matchDesignatedRequirement;
    NSString *_matchPath;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *matchPath; // @synthesize matchPath=_matchPath;
@property(readonly) NSString *matchDesignatedRequirement; // @synthesize matchDesignatedRequirement=_matchDesignatedRequirement;
@property(readonly) NSString *matchSigningIdentifier; // @synthesize matchSigningIdentifier=_matchSigningIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

