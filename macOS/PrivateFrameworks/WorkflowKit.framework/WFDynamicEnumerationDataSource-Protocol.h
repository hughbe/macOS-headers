//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSArray, NSString, WFColor, WFEnumerationParameter, WFVariableSubstitutableParameterState;

@protocol WFDynamicEnumerationDataSource <NSObject>
- (NSString *)enumeration:(WFEnumerationParameter *)arg1 localizedLabelForPossibleState:(WFVariableSubstitutableParameterState *)arg2;

@optional
- (WFColor *)enumeration:(WFEnumerationParameter *)arg1 accessoryColorForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (BOOL)enumerationAllowsMultipleValues:(WFEnumerationParameter *)arg1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (id)defaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1;
- (void)loadPossibleStatesForEnumeration:(WFEnumerationParameter *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)possibleStatesForEnumeration:(WFEnumerationParameter *)arg1;
@end

