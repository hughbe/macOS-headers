//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject
{
    struct GEOSessionID _analyticsShortSessionId;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
}

- (void).cxx_destruct;
- (id)updateWithAutoCompleteSessionData:(id)arg1;
@property(readonly, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData; // @synthesize autocompleteSessionData=_autocompleteSessionData;
- (id)initWithAutoCompleteSessionData:(id)arg1;
- (id)init;

@end

