//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions
{
    BOOL _completeDataPromise;
    BOOL _createAsMobileBackup;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) BOOL createAsMobileBackup; // @synthesize createAsMobileBackup=_createAsMobileBackup;
@property(nonatomic) BOOL completeDataPromise; // @synthesize completeDataPromise=_completeDataPromise;
- (id)initWithApplicationMetadata:(id)arg1;
- (id)init;

@end

