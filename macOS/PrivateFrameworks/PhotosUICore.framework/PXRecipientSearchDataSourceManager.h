//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXRecipientSearchDataSource;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager
{
    NSString *_queryString;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)queryStringDidChange;

// Remaining properties
@property(readonly, nonatomic) PXRecipientSearchDataSource *dataSource; // @dynamic dataSource;

@end

