//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFSearch.h>

@class NSArray, NSString;

@interface IFSearchPathMapper : IFSearch
{
    NSString *_tokenizedString;
    NSArray *_tokens;
    NSString *_tokenPrefix;
}

- (id)searchResultsForContext:(id)arg1 inDomainPath:(id)arg2;
- (BOOL)containsUserLocation;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 andIFPkgPathMapping:(id)arg2 andTokenPrefix:(id)arg3;
- (id)initWithXMLElement:(id)arg1;
- (id)_getTokenListFromString:(id)arg1;

@end

