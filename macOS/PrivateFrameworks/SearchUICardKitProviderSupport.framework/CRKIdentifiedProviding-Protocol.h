//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUICardKitProviderSupport/CRKProviderIdentifying-Protocol.h>
#import <SearchUICardKitProviderSupport/CRKProviding-Protocol.h>

@protocol CRCard, CRKCardSectionViewProviderDelegate;

@protocol CRKIdentifiedProviding <CRKProviderIdentifying, CRKProviding>

@optional
- (void)requestIdentifiedCardSectionViewProviderForCard:(id <CRCard>)arg1 delegate:(id <CRKCardSectionViewProviderDelegate>)arg2 reply:(void (^)(NSError *, id <CRKIdentifiedCardSectionViewProviding>))arg3;
@end

