//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView
{
}

+ (id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)fileSearchView;
@property(copy, nonatomic) NSString *searchTitle;
@property(copy, nonatomic) NSString *query;
@property(nonatomic) long long numResults;
@property(copy, nonatomic) NSArray *entities;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

