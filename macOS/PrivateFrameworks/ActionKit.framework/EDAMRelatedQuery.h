//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSString;

@interface EDAMRelatedQuery : FATObject
{
    NSString *_noteGuid;
    NSString *_plainText;
    EDAMNoteFilter *_filter;
    NSString *_referenceUri;
    NSString *_context;
    NSString *_cacheKey;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *referenceUri; // @synthesize referenceUri=_referenceUri;
@property(retain, nonatomic) EDAMNoteFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(retain, nonatomic) NSString *noteGuid; // @synthesize noteGuid=_noteGuid;

@end

