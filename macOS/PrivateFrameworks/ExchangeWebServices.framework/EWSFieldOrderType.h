//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSBasePathToElementType, NSString;

@interface EWSFieldOrderType : NSObject <XSDefinitionProvider>
{
    EWSBasePathToElementType *_Path;
    long long _Order;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long Order; // @synthesize Order=_Order;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path=_Path;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

