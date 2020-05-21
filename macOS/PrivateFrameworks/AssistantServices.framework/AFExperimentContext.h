//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFExperiment, NSDictionary;
@protocol AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, AFInvocationFeedbackExperiment;

@interface AFExperimentContext : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_experimentsByConfigurationIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *experimentsByConfigurationIdentifier; // @synthesize experimentsByConfigurationIdentifier=_experimentsByConfigurationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithExperimentsByConfigurationIdentifier:(id)arg1;
@property(readonly, nonatomic) AFExperiment<AFExperimentForSiriVOXSounds> *experimentForSiriVOXSounds;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> *experimentForSiriVOXTapToSiriBehavior;
@property(readonly, nonatomic) AFExperiment<AFInvocationFeedbackExperiment> *invocationFeedbackExperiment;

@end

