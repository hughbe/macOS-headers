//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, NSString;

@interface INCodableAttributeDialog : NSObject <NSSecureCoding, NSCopying, INCodableCoding>
{
    BOOL _defaultDialog;
    INCodableAttribute *_codableAttribute;
    NSString *_formatString;
    NSString *_formatStringID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=isDefaultDialog) BOOL defaultDialog; // @synthesize defaultDialog=_defaultDialog;
@property(copy, nonatomic) NSString *formatStringID; // @synthesize formatStringID=_formatStringID;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(nonatomic, setter=_setCodableAttribute:) __weak INCodableAttribute *_codableAttribute; // @synthesize _codableAttribute;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *keyPrefix;
@property(readonly, copy, nonatomic) NSString *cacheGroup;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 localizer:(id)arg3;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2 forLanguage:(id)arg3;
- (id)localizedDialogWithIntent:(id)arg1 tokens:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

