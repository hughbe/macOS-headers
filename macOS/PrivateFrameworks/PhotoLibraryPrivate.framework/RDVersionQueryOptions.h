//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSPredicate, NSSet;

@interface RDVersionQueryOptions : NSObject <NSCopying>
{
    BOOL _showHiddenVersions;
    BOOL _excludeMontageVersions;
    BOOL _suppressSorting;
    NSPredicate *_predicate;
    NSArray *_loadProperties;
    NSSet *_additionalChangeProperties;
}

@property(retain, nonatomic) NSSet *additionalChangeProperties; // @synthesize additionalChangeProperties=_additionalChangeProperties;
@property(nonatomic) BOOL suppressSorting; // @synthesize suppressSorting=_suppressSorting;
@property(retain, nonatomic) NSArray *loadProperties; // @synthesize loadProperties=_loadProperties;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) BOOL excludeMontageVersions; // @synthesize excludeMontageVersions=_excludeMontageVersions;
@property(nonatomic) BOOL showHiddenVersions; // @synthesize showHiddenVersions=_showHiddenVersions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

