//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUICardKitProviderSupport/NSObject-Protocol.h>

@class NSViewController;
@protocol CRCard, CRKCardPresenting, CRKCardSectionViewSourcing, CRKCardViewControlling;

@protocol CRKCardViewControllerProviding <NSObject>

@optional
- (void)presentation:(id <CRKCardPresenting>)arg1 didApplyCardSectionViewSource:(id <CRKCardSectionViewSourcing>)arg2 toCardViewController:(NSViewController<CRKCardViewControlling> *)arg3;
- (unsigned long long)displayPriorityForCard:(id <CRCard>)arg1;
- (NSViewController<CRKCardViewControlling> *)cardViewControllerForCard:(id <CRCard>)arg1;
@end

