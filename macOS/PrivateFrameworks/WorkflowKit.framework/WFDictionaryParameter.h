//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSSet, NSString;

@interface WFDictionaryParameter : WFParameter
{
    NSString *_localizedItemTypeName;
    NSString *_localizedNewItemTypeName;
    NSSet *_allowedValueTypes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *allowedValueTypes; // @synthesize allowedValueTypes=_allowedValueTypes;
@property(readonly, nonatomic) NSString *localizedNewItemTypeName; // @synthesize localizedNewItemTypeName=_localizedNewItemTypeName;
@property(readonly, nonatomic) NSString *localizedItemTypeName; // @synthesize localizedItemTypeName=_localizedItemTypeName;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

