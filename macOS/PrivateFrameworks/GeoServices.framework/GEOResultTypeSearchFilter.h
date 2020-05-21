//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOSearchFilter-Protocol.h>

@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter>
{
    unsigned long long _types;
}

@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
- (BOOL)applyToSearchParameters:(id)arg1 error:(id *)arg2;
- (id)initWithResultTypes:(unsigned long long)arg1;
- (id)init;

@end

