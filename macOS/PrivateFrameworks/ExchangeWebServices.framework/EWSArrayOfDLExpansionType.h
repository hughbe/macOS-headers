//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSArray, NSString;

@interface EWSArrayOfDLExpansionType : NSObject <XSDefinitionProvider>
{
    NSArray *_Mailbox;
    long long _IndexedPagingOffset;
    long long _NumeratorOffset;
    long long _AbsoluteDenominator;
    long long _IncludesLastItemInRange;
    long long _TotalItemsInView;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long TotalItemsInView; // @synthesize TotalItemsInView=_TotalItemsInView;
@property(nonatomic) long long IncludesLastItemInRange; // @synthesize IncludesLastItemInRange=_IncludesLastItemInRange;
@property(nonatomic) long long AbsoluteDenominator; // @synthesize AbsoluteDenominator=_AbsoluteDenominator;
@property(nonatomic) long long NumeratorOffset; // @synthesize NumeratorOffset=_NumeratorOffset;
@property(nonatomic) long long IndexedPagingOffset; // @synthesize IndexedPagingOffset=_IndexedPagingOffset;
@property(copy, nonatomic) NSArray *Mailbox; // @synthesize Mailbox=_Mailbox;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

