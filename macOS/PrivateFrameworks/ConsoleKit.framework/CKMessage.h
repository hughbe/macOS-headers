//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CKEntity.h>

#import "NSCopying.h"

@class NSNumber, NSString;

@interface CKMessage : CKEntity <NSCopying>
{
    long long _type;
    NSString *_message;
    NSString *_subsystem;
    NSString *_category;
    NSNumber *_activityIdentifier;
    NSString *_payload;
}

+ (id)overridedFilterValueForType:(long long)arg1 value:(id)arg2;
+ (id)propertyNameForFilter:(id)arg1;
+ (long long)messageTypeWithLocalizedTypeName:(id)arg1;
+ (id)localizedMessageTypeNameForType:(long long)arg1;
@property(retain, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSNumber *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)stringDescriptionLengthForIndexer;
- (id)stringDescriptionForIndexer;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localizedMessageTypeName;
- (BOOL)isEqualToMessage:(id)arg1;
- (id)initWithIdentifier:(id)arg1 processImagePath:(id)arg2 libraryImagePath:(id)arg3 timestamp:(id)arg4 isVolatile:(BOOL)arg5 message:(id)arg6 type:(long long)arg7;
- (id)initWithIdentifier:(id)arg1 processImagePath:(id)arg2 libraryImagePath:(id)arg3 timestamp:(id)arg4 isVolatile:(BOOL)arg5;
- (id)iconForCurrentMessageType;
- (id)textColorForCurrentMessageType;
- (id)colorForCurrentMessageType;
- (void)configureTableCellView:(id)arg1 withColumnIdentifier:(id)arg2 tableView:(id)arg3;
- (void)configureTableCellView:(id)arg1 withColumnIdentifier:(id)arg2 tableView:(id)arg3 expanded:(BOOL)arg4;

@end

