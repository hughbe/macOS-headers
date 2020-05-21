//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseFolderIdType.h>

#import <ExchangeWebServices/NSSecureCoding-Protocol.h>
#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSFolderIdType : EWSBaseFolderIdType <XSDefinitionProvider, NSSecureCoding>
{
    NSString *_Id;
    NSString *_ChangeKey;
}

+ (BOOL)supportsSecureCoding;
+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ChangeKey; // @synthesize ChangeKey=_ChangeKey;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

