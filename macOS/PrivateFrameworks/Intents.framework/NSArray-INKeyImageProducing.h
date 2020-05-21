//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INCodableAttributeRelationComparing-Protocol.h>
#import <Intents/INImageProxyInjecting-Protocol.h>
#import <Intents/INIntentResolutionResultDataProviding-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/INKeyImageProducing-Protocol.h>

@class INImage, NSString;

@interface NSArray (INKeyImageProducing) <INKeyImageProducing, INCacheableContainer, INJSONSerializable, INImageProxyInjecting, INCodableAttributeRelationComparing, INIntentResolutionResultDataProviding>
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;
- (id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_indexingRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

