//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPSpotlightQueryDescriptor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor
{
    NSString *_searchQueryString;
}

- (void).cxx_destruct;
@property(copy) NSString *searchQueryString; // @synthesize searchQueryString=_searchQueryString;
- (BOOL)keepCollectorsAlive;
- (unsigned long long)hash;
- (BOOL)isEqualToItemQueryDescriptor:(id)arg1;
- (id)_scopes;
- (void)augmentQueryContext:(id)arg1;
- (id)queryStringForMountPoint:(id)arg1;

@end

