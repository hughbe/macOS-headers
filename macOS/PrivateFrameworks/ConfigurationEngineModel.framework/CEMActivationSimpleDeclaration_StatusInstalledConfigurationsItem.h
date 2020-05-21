//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMActivationSimpleDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase
{
    NSString *_statusIdentifier;
    NSString *_statusServerHash;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withServerHash:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withServerHash:(id)arg2;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *statusServerHash; // @synthesize statusServerHash=_statusServerHash;
@property(copy, nonatomic) NSString *statusIdentifier; // @synthesize statusIdentifier=_statusIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

