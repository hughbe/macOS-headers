//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLPairingProcessor.h>

@interface PLCTMPairingProcessor : PLPairingProcessor
{
}

- (void)_installSocResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 referencedResourceURLs:(id)arg3;
- (BOOL)_copyResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id *)arg3;
- (id)_mapResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id *)arg3;
- (id)ctmFetchRequestWithPredicate:(id)arg1;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (id)fetchRequestForLibrary;
- (id)combinePairs:(id)arg1 error:(id *)arg2;
- (id)firstGroupFromAssets:(id)arg1;
- (id)groupIDForAsset:(id)arg1;

@end

