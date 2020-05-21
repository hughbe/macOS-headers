//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@interface WFAirplaneModeTrigger : WFTrigger
{
    BOOL _onEnable;
    BOOL _onDisable;
}

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
@property(nonatomic) BOOL onDisable; // @synthesize onDisable=_onDisable;
@property(nonatomic) BOOL onEnable; // @synthesize onEnable=_onEnable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (BOOL)hasValidConfiguration;
- (id)init;

@end

