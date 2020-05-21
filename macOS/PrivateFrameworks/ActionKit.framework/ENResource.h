//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface ENResource : NSObject
{
    NSData *_data;
    NSString *_mimeType;
    NSString *_filename;
    NSString *_sourceUrl;
    NSData *_dataHash;
    NSDictionary *_edamAttributes;
    NSString *_guid;
}

+ (id)resourceWithServiceResource:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSDictionary *edamAttributes; // @synthesize edamAttributes=_edamAttributes;
@property(retain, nonatomic) NSData *dataHash; // @synthesize dataHash=_dataHash;
@property(copy, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *mediaTag;
- (id)EDAMResource;
- (id)initWithData:(id)arg1 mimeType:(id)arg2;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 filename:(id)arg3;

@end

