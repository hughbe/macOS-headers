//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FPExtensionEnumerationSettings, NSFileProviderRequest;
@protocol FPXEnumeratorObserver;

@protocol FPXVendorObservation
- (void)fetchAndStartEnumeratingWithSettings:(FPExtensionEnumerationSettings *)arg1 observer:(id <FPXEnumeratorObserver>)arg2 request:(NSFileProviderRequest *)arg3 completionHandler:(void (^)(id <FPXEnumerator>, NSError *))arg4;
@end

