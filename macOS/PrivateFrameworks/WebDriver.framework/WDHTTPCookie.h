//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface WDHTTPCookie : NSObject <NSCopying>
{
    BOOL _secure;
    BOOL _httpOnly;
    BOOL _session;
    NSString *_name;
    NSString *_value;
    NSString *_domain;
    NSString *_path;
    NSDate *_expirationDate;
}

+ (id)defaultCookieWithName:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isSession) BOOL session; // @synthesize session=_session;
@property(nonatomic, getter=isHTTPOnly) BOOL httpOnly; // @synthesize httpOnly=_httpOnly;
@property(nonatomic, getter=isSecure) BOOL secure; // @synthesize secure=_secure;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toJSONPayload;
- (unsigned long long)hash;
- (BOOL)isEqualToCookie:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

