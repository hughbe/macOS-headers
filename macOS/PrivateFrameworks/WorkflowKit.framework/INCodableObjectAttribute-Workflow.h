//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableObjectAttribute.h>

@interface INCodableObjectAttribute (Workflow)
- (id)mediaTypeFromIntentMediaType:(long long)arg1;
- (id)wf_processedParameterValueForValue:(id)arg1;
- (id)wf_contentItemForValue:(id)arg1;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;
- (Class)wf_parameterClass;
- (Class)wf_objectClass;
- (Class)wf_facadeClass;
@end

