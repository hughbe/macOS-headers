//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationAdvancedDeclaration_Status : CEMPayloadBase
{
    NSArray *_statusInstalledConfigurations;
}

+ (id)buildRequiredOnly;
+ (id)buildWithInstalledConfigurations:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *statusInstalledConfigurations; // @synthesize statusInstalledConfigurations=_statusInstalledConfigurations;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

