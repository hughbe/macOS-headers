//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INEnumerable-Protocol.h>

@class NSString;

@interface NSObject (Readable) <INCodableAttributeRelationComparing, INEnumerable>
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (BOOL)_intents_isValidKey:(id)arg1;
- (BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (SEL)_intents_setterForPropertyWithName:(id)arg1;
- (id)_intents_indexingRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

