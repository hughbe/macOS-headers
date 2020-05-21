//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface WFWordPressBlog : MTLModel <MTLJSONSerializing>
{
    BOOL _isAdmin;
    NSURL *_url;
    NSURL *_endpointURL;
    NSNumber *_blogId;
    NSString *_blogName;
}

+ (id)blogWithEndpointURL:(id)arg1;
+ (id)isAdminJSONTransformer;
+ (id)blogIdJSONTransformer;
+ (id)endpointURLJSONTransformer;
+ (id)urlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isAdmin; // @synthesize isAdmin=_isAdmin;
@property(readonly, copy, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(readonly, copy, nonatomic) NSNumber *blogId; // @synthesize blogId=_blogId;
@property(readonly, copy, nonatomic) NSURL *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithEndpointURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

