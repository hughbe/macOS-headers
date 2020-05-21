//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
    NSString *_templateString;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *templateString; // @synthesize templateString=_templateString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2;
- (id)templateBySubstitutingValues:(id)arg1;
- (id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2;
- (id)URLWithSearchTerms:(id)arg1;
- (BOOL)includesParameter:(id)arg1;
- (id)initWithString:(id)arg1;

@end

