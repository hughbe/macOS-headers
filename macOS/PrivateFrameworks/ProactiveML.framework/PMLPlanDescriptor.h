//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/NSCopying-Protocol.h>

@class NSString;

@interface PMLPlanDescriptor : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_version;
    NSString *_locale;
}

+ (id)planIdFromString:(id)arg1;
+ (id)descriptorFromPlanId:(id)arg1;
+ (BOOL)isValidPlanId:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3;

@end

