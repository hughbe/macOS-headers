//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@interface INCodableAttributeMetadata (Workflow)
- (void)wf_updateWithParameterValue:(id)arg1;
- (void)wf_updateWithParameterState:(id)arg1;
- (id)wf_contentItemForValue:(id)arg1;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (BOOL)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2;
- (Class)wf_parameterClass;
- (Class)wf_objectClass;
@end

