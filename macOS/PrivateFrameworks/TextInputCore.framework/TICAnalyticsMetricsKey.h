//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>
#import <TextInputCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface TICAnalyticsMetricsKey : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _keyboardType;
    NSString *_language;
    NSString *_region;
    NSString *_layoutName;
    long long _userInterfaceIdiom;
}

+ (long long)userInterfaceIdiomStringToEnum:(id)arg1;
+ (id)userInterfaceIdiomToString:(long long)arg1;
+ (unsigned char)keyboardTypeStringToEnum:(id)arg1;
+ (id)keyboardTypeEnumToString:(unsigned char)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) unsigned char keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) NSString *layoutName; // @synthesize layoutName=_layoutName;
@property(readonly, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;
- (id)initWithLanguage:(id)arg1 region:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5;

@end

