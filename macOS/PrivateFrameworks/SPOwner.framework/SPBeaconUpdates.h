//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPBeaconUpdates : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    long long _roleId;
    NSString *_emoji;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(nonatomic) long long roleId; // @synthesize roleId=_roleId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 roleId:(long long)arg2;

@end

