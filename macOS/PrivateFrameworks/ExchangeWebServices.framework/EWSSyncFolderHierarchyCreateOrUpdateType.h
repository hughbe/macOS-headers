//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSBaseFolderType, NSString;

@interface EWSSyncFolderHierarchyCreateOrUpdateType : NSObject <XSDefinitionProvider>
{
    EWSBaseFolderType *_Item;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) EWSBaseFolderType *Item; // @synthesize Item=_Item;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

