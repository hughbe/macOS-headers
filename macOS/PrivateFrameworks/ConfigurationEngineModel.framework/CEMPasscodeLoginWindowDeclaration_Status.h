//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMPasscodeLoginWindowDeclaration_Status : CEMPayloadBase
{
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

