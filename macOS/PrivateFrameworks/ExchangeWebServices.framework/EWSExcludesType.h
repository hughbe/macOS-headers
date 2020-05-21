//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSSearchExpressionType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSBasePathToElementType, EWSExcludesValueType, NSString;

@interface EWSExcludesType : EWSSearchExpressionType <XSDefinitionProvider>
{
    EWSBasePathToElementType *_Path;
    EWSExcludesValueType *_Bitmask;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) EWSExcludesValueType *Bitmask; // @synthesize Bitmask=_Bitmask;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path=_Path;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

