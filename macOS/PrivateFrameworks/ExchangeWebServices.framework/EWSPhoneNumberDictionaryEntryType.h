//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSPhoneNumberDictionaryEntryType : NSObject <XSDefinitionProvider>
{
    NSString *_contentString;
    NSString *_Key;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *Key; // @synthesize Key=_Key;
@property(copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

