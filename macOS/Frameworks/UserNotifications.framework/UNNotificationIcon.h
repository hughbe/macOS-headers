//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString;

@interface UNNotificationIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_applicationIdentifier;
    NSString *_name;
    NSString *_path;
}

+ (BOOL)supportsSecureCoding;
+ (id)iconForApplicationIdentifier:(id)arg1;
+ (id)iconAtPath:(id)arg1;
+ (id)iconNamed:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)_initWithName:(id)arg1 path:(id)arg2 applicationIdentifier:(id)arg3;

@end

