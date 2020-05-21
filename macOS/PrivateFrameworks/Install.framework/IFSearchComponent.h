//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFSearch.h>

@class IFComponent, NSString;

@interface IFSearchComponent : IFSearch
{
    IFComponent *_requiredComponent;
    NSString *_subSearchID;
    NSString *_searchPath;
}

- (id)searchResultsForContext:(id)arg1 inDomainPath:(id)arg2;
- (void)setSearchPath:(id)arg1;
- (id)searchPath;
- (void)setSearchID:(id)arg1;
- (id)searchID;
- (id)component;
- (void)dealloc;
- (id)initWithXMLElement:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forComponent:(id)arg2;
- (id)_findBundlesViaSpotlight:(id)arg1 restrictToPath:(id)arg2;
- (id)_findBundleViaLaunchServices:(id)arg1 restrictToPath:(id)arg2;
- (id)_searchForBundleWithIdentifier:(id)arg1 defaultPath:(id)arg2 inDomainPath:(id)arg3;

@end

