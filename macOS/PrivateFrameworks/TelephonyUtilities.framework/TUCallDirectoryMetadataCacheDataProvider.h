//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider
{
    CDUnknownBlockType _countryDialingCode;
    CDUnknownBlockType _firstIdentificationEntriesForEnabledExtensions;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType firstIdentificationEntriesForEnabledExtensions; // @synthesize firstIdentificationEntriesForEnabledExtensions=_firstIdentificationEntriesForEnabledExtensions;
@property(copy, nonatomic) CDUnknownBlockType countryDialingCode; // @synthesize countryDialingCode=_countryDialingCode;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)dealloc;
- (id)init;

@end

