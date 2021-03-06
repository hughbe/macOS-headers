//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriKitFlow/NSCopying-Protocol.h>
#import <SiriKitFlow/NSMutableCopying-Protocol.h>
#import <SiriKitFlow/NSObject-Protocol.h>
#import <SiriKitFlow/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol AceContext;

@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSMutableDictionary *)properties;
- (NSMutableDictionary *)dictionary;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)init;
@end

