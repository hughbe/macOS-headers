//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSArray, NSString;

@interface SOAPEnvelope : NSObject <XSDefinitionProvider>
{
    NSArray *_Header;
    NSArray *_Body;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Body; // @synthesize Body=_Body;
@property(copy, nonatomic) NSArray *Header; // @synthesize Header=_Header;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

