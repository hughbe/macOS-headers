//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/NSCoding-Protocol.h>
#import <CoreWLAN/NSCopying-Protocol.h>

@class NSString;

@interface CW8021XProfile : NSObject <NSCopying, NSCoding>
{
    NSString *_userDefinedName;
    NSString *_ssid;
    NSString *_username;
    NSString *_password;
    BOOL _alwaysPromptForPassword;
}

+ (id)allUser8021XProfiles;
+ (id)profile;
@property BOOL alwaysPromptForPassword; // @synthesize alwaysPromptForPassword=_alwaysPromptForPassword;
@property(copy) NSString *ssid; // @synthesize ssid=_ssid;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *userDefinedName; // @synthesize userDefinedName=_userDefinedName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToProfile:(id)arg1;
- (void)dealloc;
- (id)init;

@end

