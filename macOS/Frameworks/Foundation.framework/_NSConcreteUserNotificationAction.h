//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserNotificationAction.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSConcreteUserNotificationAction : NSUserNotificationAction <NSSecureCoding>
{
    NSString *_title;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)isEqual:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)title;
- (void)_setIdentifier:(id)arg1;
- (id)identifier;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

