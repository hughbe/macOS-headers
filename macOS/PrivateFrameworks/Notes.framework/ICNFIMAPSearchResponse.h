//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFIMAPResponse.h>

@class NSArray;

@interface ICNFIMAPSearchResponse : ICNFIMAPResponse
{
    NSArray *_searchResults;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (id)description;
- (id)debugDescription;

@end

